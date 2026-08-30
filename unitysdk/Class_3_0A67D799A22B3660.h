#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasSelectDicePointCompare; }

#define CLASS_3_0A67D799A22B3660_METHOD_3_980641BEEB0F849F_OFFSET UNITYSDK_OFFSET(0x1B283110)
#define CLASS_3_0A67D799A22B3660__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2830F0)

inline static constexpr unsigned int Class_3_0A67D799A22B3660_TypeDefinitionIndex = 35669;

class Class_3_0A67D799A22B3660 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* BADLCEENHMJ; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_0A67D799A22B3660__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_980641BEEB0F849F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A67D799A22B3660_METHOD_3_980641BEEB0F849F_OFFSET))(this);
	}
};
