#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind; }

#define CLASS_2_6296C16A8E9B046E_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17B01890)
#define CLASS_2_6296C16A8E9B046E__CTOR_OFFSET UNITYSDK_OFFSET(0x17B01880)

inline static constexpr unsigned int Class_2_6296C16A8E9B046E_TypeDefinitionIndex = 34665;

class Class_2_6296C16A8E9B046E : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::Class_3_F65294BF89CA0784* Field_2_0; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceHasNOfAKind*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_6296C16A8E9B046E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6296C16A8E9B046E_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
