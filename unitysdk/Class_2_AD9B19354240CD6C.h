#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllSame; }

#define CLASS_2_AD9B19354240CD6C_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17CDDB20)
#define CLASS_2_AD9B19354240CD6C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDDB10)

inline static constexpr unsigned int Class_2_AD9B19354240CD6C_TypeDefinitionIndex = 34000;

class Class_2_AD9B19354240CD6C : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSame*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_AD9B19354240CD6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9B19354240CD6C_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
