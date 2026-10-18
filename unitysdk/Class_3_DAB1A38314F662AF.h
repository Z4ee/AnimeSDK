#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnyContent; }

#define CLASS_3_DAB1A38314F662AF_METHOD_3_B3DF6DC10CC87E1A_OFFSET UNITYSDK_OFFSET(0x1C7D04D0)
#define CLASS_3_DAB1A38314F662AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D04B0)

inline static constexpr unsigned int Class_3_DAB1A38314F662AF_TypeDefinitionIndex = 36345;

class Class_3_DAB1A38314F662AF : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* IBFKCPNCAOE; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B3DF6DC10CC87E1A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF_METHOD_3_B3DF6DC10CC87E1A_OFFSET))(this);
	}
};
