#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllSame; }

#define CLASS_3_218638B65579DF6D_METHOD_3_BA4994657338A2BB_OFFSET UNITYSDK_OFFSET(0x1C245D70)
#define CLASS_3_218638B65579DF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C245D50)

inline static constexpr unsigned int Class_3_218638B65579DF6D_TypeDefinitionIndex = 35657;

class Class_3_218638B65579DF6D : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* OMKDKMFHOHM; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_BA4994657338A2BB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_218638B65579DF6D_METHOD_3_BA4994657338A2BB_OFFSET))(this);
	}
};
