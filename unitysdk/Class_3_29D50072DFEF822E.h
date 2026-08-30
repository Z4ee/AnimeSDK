#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllEven; }

#define CLASS_3_29D50072DFEF822E_METHOD_3_C8D6D8DA0C67D22D_OFFSET UNITYSDK_OFFSET(0x1C190FF0)
#define CLASS_3_29D50072DFEF822E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C190FD0)

inline static constexpr unsigned int Class_3_29D50072DFEF822E_TypeDefinitionIndex = 35656;

class Class_3_29D50072DFEF822E : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* JAIMFOLALLI; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C8D6D8DA0C67D22D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E_METHOD_3_C8D6D8DA0C67D22D_OFFSET))(this);
	}
};
