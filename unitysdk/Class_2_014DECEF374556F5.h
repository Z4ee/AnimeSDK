#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_9.h"

class Class_3_7E62691AFFAF8E9F;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllSequence; }

#define CLASS_2_014DECEF374556F5_METHOD_2_DC1C8AB73655E8C6_OFFSET UNITYSDK_OFFSET(0x17D73A60)
#define CLASS_2_014DECEF374556F5__CTOR_OFFSET UNITYSDK_OFFSET(0x17D73A50)

inline static constexpr unsigned int Class_2_014DECEF374556F5_TypeDefinitionIndex = 34010;

class Class_2_014DECEF374556F5 : public ::Class_1_43BD383C98B4C0C5_9
{
public:
	::Class_3_7E62691AFFAF8E9F* Field_2_1; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* a1, ::Class_3_7E62691AFFAF8E9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*, ::Class_3_7E62691AFFAF8E9F*))((::PBYTE)hIl2Cpp + CLASS_2_014DECEF374556F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_DC1C8AB73655E8C6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014DECEF374556F5_METHOD_2_DC1C8AB73655E8C6_OFFSET))(this);
	}
};
