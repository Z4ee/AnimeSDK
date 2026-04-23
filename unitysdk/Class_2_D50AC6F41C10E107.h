#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount; }

#define CLASS_2_D50AC6F41C10E107_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x17D3E870)
#define CLASS_2_D50AC6F41C10E107__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3E860)

inline static constexpr unsigned int Class_2_D50AC6F41C10E107_TypeDefinitionIndex = 34008;

class Class_2_D50AC6F41C10E107 : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* Field_2_0; // 0x10
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_D50AC6F41C10E107__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D50AC6F41C10E107_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
