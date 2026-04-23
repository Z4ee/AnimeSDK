#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define CLASS_3_BFAC703D9B173140_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12350990)
#define CLASS_3_BFAC703D9B173140_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x123508D0)
#define CLASS_3_BFAC703D9B173140_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x12350810)
#define CLASS_3_BFAC703D9B173140_METHOD_3_D3977465CDFAF28B_OFFSET UNITYSDK_OFFSET(0x123505E0)
#define CLASS_3_BFAC703D9B173140_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12350690)
#define CLASS_3_BFAC703D9B173140__CTOR_OFFSET UNITYSDK_OFFSET(0x12350920)
#define CLASS_3_BFAC703D9B173140___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12350930)

inline static constexpr unsigned int Class_3_BFAC703D9B173140_TypeDefinitionIndex = 71665;

class Class_3_BFAC703D9B173140 : public ::Class_2_A45A3A893E113CFD
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

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_61929A3103595552_OFFSET))(this);
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
