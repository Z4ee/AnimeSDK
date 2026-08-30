#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount; }

#define CLASS_2_47F43E9B533DFCAD_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1972EF90)
#define CLASS_2_47F43E9B533DFCAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1972EF80)

inline static constexpr unsigned int Class_2_47F43E9B533DFCAD_TypeDefinitionIndex = 35527;

class Class_2_47F43E9B533DFCAD : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* IGHAHBNLIJA; // 0x10
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceNOfAKindCount*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_47F43E9B533DFCAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F43E9B533DFCAD_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
