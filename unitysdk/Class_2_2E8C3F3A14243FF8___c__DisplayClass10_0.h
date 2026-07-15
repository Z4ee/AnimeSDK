#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F58629771D14EB4;
class Class_2_2E8C3F3A14243FF8;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace System { class Action; }

#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1875BCA0)
#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET UNITYSDK_OFFSET(0x1875C200)
#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET UNITYSDK_OFFSET(0x1875C390)

inline static constexpr unsigned int Class_2_2E8C3F3A14243FF8___c__DisplayClass10_0_TypeDefinitionIndex = 72548;

class Class_2_2E8C3F3A14243FF8___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_2_2E8C3F3A14243FF8* __4__this; // 0x10
	::System::Action* __9__1; // 0x18
	::Class_1_8F58629771D14EB4* loanServerSyncData; // 0x20
	::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowLoanPerformence_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET))(this);
	}

	::System::Void __ShowLoanPerformence_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET))(this);
	}
};
