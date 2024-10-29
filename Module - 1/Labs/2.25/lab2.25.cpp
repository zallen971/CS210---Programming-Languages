#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float gasMilage;
    float gasCost;

    cout << fixed << setprecision(2);

    cin >> gasMilage;
    cin >> gasCost;

    float twentyMiles = (20 / gasMilage) * gasCost;
    float seventyFiveMiles = (75 / gasMilage) * gasCost;
    float fiveHundredMiles = (500 / gasMilage) * gasCost;

    cout << twentyMiles << " ";
    cout << seventyFiveMiles << " ";
    cout << fiveHundredMiles << endl;

    return 0;
}