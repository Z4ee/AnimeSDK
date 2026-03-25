#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F58629771D14EB4;
class Class_2_A8371512CE517879;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }

#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11887180)
#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS9_0___TRYSHOWLOANPERFORMENCE_B__0_OFFSET UNITYSDK_OFFSET(0x11887C60)

inline static constexpr unsigned int Class_2_A8371512CE517879___c__DisplayClass9_0_TypeDefinitionIndex = 62226;

class Class_2_A8371512CE517879___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_2_A8371512CE517879* __4__this; // 0x10
	::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x18
	::Class_1_8F58629771D14EB4* loanServerSyncData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryShowLoanPerformence_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS9_0___TRYSHOWLOANPERFORMENCE_B__0_OFFSET))(this);
	}
};
