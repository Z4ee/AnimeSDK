#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum; }

#define CLASS_2_44AB0C72E9B4D971_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17BF8B10)
#define CLASS_2_44AB0C72E9B4D971__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF8B00)

inline static constexpr unsigned int Class_2_44AB0C72E9B4D971_TypeDefinitionIndex = 33999;

class Class_2_44AB0C72E9B4D971 : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_44AB0C72E9B4D971__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44AB0C72E9B4D971_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
