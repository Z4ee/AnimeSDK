#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_TotalDamageTakenCompare; }

#define CLASS_3_435D6DE0CCEAF1FA_METHOD_3_4901E2EFF152A35B_OFFSET UNITYSDK_OFFSET(0x13E963D0)
#define CLASS_3_435D6DE0CCEAF1FA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E963B0)

inline static constexpr unsigned int Class_3_435D6DE0CCEAF1FA_TypeDefinitionIndex = 34809;

class Class_3_435D6DE0CCEAF1FA : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_435D6DE0CCEAF1FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4901E2EFF152A35B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435D6DE0CCEAF1FA_METHOD_3_4901E2EFF152A35B_OFFSET))(this);
	}
};
