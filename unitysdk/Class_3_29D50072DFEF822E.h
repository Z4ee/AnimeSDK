#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllEven; }

#define CLASS_3_29D50072DFEF822E_METHOD_3_9D425B1B9772E9D6_OFFSET UNITYSDK_OFFSET(0x16620600)
#define CLASS_3_29D50072DFEF822E__CTOR_OFFSET UNITYSDK_OFFSET(0x166205E0)

inline static constexpr unsigned int Class_3_29D50072DFEF822E_TypeDefinitionIndex = 28456;

class Class_3_29D50072DFEF822E : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9D425B1B9772E9D6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29D50072DFEF822E_METHOD_3_9D425B1B9772E9D6_OFFSET))(this);
	}
};
