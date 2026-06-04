#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_16.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasSequence; }

#define CLASS_2_C8209C854A4B9028_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x189B3680)
#define CLASS_2_C8209C854A4B9028__CTOR_OFFSET UNITYSDK_OFFSET(0x189B3670)

inline static constexpr unsigned int Class_2_C8209C854A4B9028_TypeDefinitionIndex = 34285;

class Class_2_C8209C854A4B9028 : public ::Class_1_43BD383C98B4C0C5_16
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* Field_2_0; // 0x10
	::Class_3_F65294BF89CA0784* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasSequence*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_C8209C854A4B9028__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8209C854A4B9028_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
