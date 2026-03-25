#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount; }

#define CLASS_2_1D52D0A83824CDAC_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1670F540)
#define CLASS_2_1D52D0A83824CDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1670F530)

inline static constexpr unsigned int Class_2_1D52D0A83824CDAC_TypeDefinitionIndex = 28353;

class Class_2_1D52D0A83824CDAC : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* Field_2_0; // 0x10
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenCount*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_1D52D0A83824CDAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D52D0A83824CDAC_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
