#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceMonoView; }

#define CLASS_3_BFAC703D9B173140_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x179F4360)
#define CLASS_3_BFAC703D9B173140_METHOD_3_D3977465CDFAF28B_OFFSET UNITYSDK_OFFSET(0x179F4130)
#define CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x179F4420)
#define CLASS_3_BFAC703D9B173140_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x179F41E0)
#define CLASS_3_BFAC703D9B173140__CTOR_OFFSET UNITYSDK_OFFSET(0x179F4470)

inline static constexpr unsigned int Class_3_BFAC703D9B173140_TypeDefinitionIndex = 74212;

class Class_3_BFAC703D9B173140 : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView* Field_3_0; // 0x20
	::Class_1_A043D803AC652E6E* Field_3_1; // 0x28
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

	::System::Void Method_3_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAC703D9B173140_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
