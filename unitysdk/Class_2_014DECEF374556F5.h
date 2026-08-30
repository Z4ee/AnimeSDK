#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllSequence; }

#define CLASS_2_014DECEF374556F5_METHOD_2_18177A4B3C1B0D63_OFFSET UNITYSDK_OFFSET(0x1C1EAB90)
#define CLASS_2_014DECEF374556F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EAB80)

inline static constexpr unsigned int Class_2_014DECEF374556F5_TypeDefinitionIndex = 35535;

class Class_2_014DECEF374556F5 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* IGHAHBNLIJA; // 0x10
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllSequence*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_014DECEF374556F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_18177A4B3C1B0D63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_014DECEF374556F5_METHOD_2_18177A4B3C1B0D63_OFFSET))(this);
	}
};
