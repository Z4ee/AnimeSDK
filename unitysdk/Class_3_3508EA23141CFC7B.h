#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceSequence; }

#define CLASS_3_3508EA23141CFC7B_METHOD_3_495115E0F6EE5B14_OFFSET UNITYSDK_OFFSET(0x1C191360)
#define CLASS_3_3508EA23141CFC7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C191340)

inline static constexpr unsigned int Class_3_3508EA23141CFC7B_TypeDefinitionIndex = 35654;

class Class_3_3508EA23141CFC7B : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* FONADBEIAEO; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_3508EA23141CFC7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_495115E0F6EE5B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3508EA23141CFC7B_METHOD_3_495115E0F6EE5B14_OFFSET))(this);
	}
};
