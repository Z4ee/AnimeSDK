#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount; }

#define CLASS_2_47F43E9B533DFCAD_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17CBA070)
#define CLASS_2_47F43E9B533DFCAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBA060)

inline static constexpr unsigned int Class_2_47F43E9B533DFCAD_TypeDefinitionIndex = 34002;

class Class_2_47F43E9B533DFCAD : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* Field_2_0; // 0x10
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_47F43E9B533DFCAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F43E9B533DFCAD_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
