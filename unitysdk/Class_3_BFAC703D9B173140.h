#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_33.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define CLASS_3_BFAC703D9B173140_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14202A80)
#define CLASS_3_BFAC703D9B173140_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x14202900)
#define CLASS_3_BFAC703D9B173140_METHOD_3_D3977465CDFAF28B_OFFSET UNITYSDK_OFFSET(0x142026D0)
#define CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x142029C0)
#define CLASS_3_BFAC703D9B173140_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14202780)
#define CLASS_3_BFAC703D9B173140__CTOR_OFFSET UNITYSDK_OFFSET(0x14202A10)
#define CLASS_3_BFAC703D9B173140___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14202A20)

inline static constexpr unsigned int Class_3_BFAC703D9B173140_TypeDefinitionIndex = 72687;

class Class_3_BFAC703D9B173140 : public ::Class_2_A48F3719AA1CF200_33
{
public:
	::Class_1_A043D803AC652E6E* Field_3_0; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140__CTOR_OFFSET))(this);
	}

	static ::Class_3_BFAC703D9B173140* Method_3_D3977465CDFAF28B(::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* a1, ::System::Single a2)
	{
		return ((::Class_3_BFAC703D9B173140*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_D3977465CDFAF28B_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
