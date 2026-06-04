#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasSelectDicePointCompare; }

#define CLASS_3_0A67D799A22B3660_METHOD_3_1291F9C0885554EC_OFFSET UNITYSDK_OFFSET(0x18A5AE90)
#define CLASS_3_0A67D799A22B3660__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5AE70)

inline static constexpr unsigned int Class_3_0A67D799A22B3660_TypeDefinitionIndex = 34426;

class Class_3_0A67D799A22B3660 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_0A67D799A22B3660__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1291F9C0885554EC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A67D799A22B3660_METHOD_3_1291F9C0885554EC_OFFSET))(this);
	}
};
