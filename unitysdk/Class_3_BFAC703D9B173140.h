#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define CLASS_3_BFAC703D9B173140_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x1617C140)
#define CLASS_3_BFAC703D9B173140_METHOD_3_D3977465CDFAF28B_OFFSET UNITYSDK_OFFSET(0x1617BF10)
#define CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x1617C200)
#define CLASS_3_BFAC703D9B173140_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1617BFC0)
#define CLASS_3_BFAC703D9B173140__CTOR_OFFSET UNITYSDK_OFFSET(0x1617C250)

inline static constexpr unsigned int Class_3_BFAC703D9B173140_TypeDefinitionIndex = 77697;

class Class_3_BFAC703D9B173140 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* CFKHNPGEAJA; // 0x20
	::Class_1_A043D803AC652E6E* GCFJDABCFGK; // 0x28
	::System::Single BPMNMDJIPLE; // 0x30

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

	::System::Void Method_3_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
