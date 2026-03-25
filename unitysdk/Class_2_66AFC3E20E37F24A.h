#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange; }

#define CLASS_2_66AFC3E20E37F24A_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x16732EB0)
#define CLASS_2_66AFC3E20E37F24A__CTOR_OFFSET UNITYSDK_OFFSET(0x16732EA0)

inline static constexpr unsigned int Class_2_66AFC3E20E37F24A_TypeDefinitionIndex = 28361;

class Class_2_66AFC3E20E37F24A : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_66AFC3E20E37F24A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66AFC3E20E37F24A_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
