#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define CLASS_2_2ECBAB03A5E3A90F___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D3F8F0)
#define CLASS_2_2ECBAB03A5E3A90F___C__DISPLAYCLASS3_0__TICK_B__0_OFFSET UNITYSDK_OFFSET(0x19D3FAD0)

inline static constexpr unsigned int Class_2_2ECBAB03A5E3A90F___c__DisplayClass3_0_TypeDefinitionIndex = 36660;

class Class_2_2ECBAB03A5E3A90F___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceActionBase* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _Tick_b__0(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECBAB03A5E3A90F___C__DISPLAYCLASS3_0__TICK_B__0_OFFSET))(this, a1);
	}
};
