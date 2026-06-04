#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F58629771D14EB4;
class Class_2_A8371512CE517879;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace System { class Action; }

#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA783040)
#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET UNITYSDK_OFFSET(0xA7835A0)
#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET UNITYSDK_OFFSET(0xA783730)

inline static constexpr unsigned int Class_2_A8371512CE517879___c__DisplayClass10_0_TypeDefinitionIndex = 71035;

class Class_2_A8371512CE517879___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_8F58629771D14EB4* loanServerSyncData; // 0x10
	::System::Action* __9__1; // 0x18
	::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x20
	::Class_2_A8371512CE517879* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowLoanPerformence_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET))(this);
	}

	::System::Void __ShowLoanPerformence_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET))(this);
	}
};
