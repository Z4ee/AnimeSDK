#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllSame; }

#define CLASS_3_218638B65579DF6D_METHOD_3_EECA3E84CCDC55C4_OFFSET UNITYSDK_OFFSET(0x16640BF0)
#define CLASS_3_218638B65579DF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x16640BD0)

inline static constexpr unsigned int Class_3_218638B65579DF6D_TypeDefinitionIndex = 28457;

class Class_3_218638B65579DF6D : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_EECA3E84CCDC55C4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D_METHOD_3_EECA3E84CCDC55C4_OFFSET))(this);
	}
};
