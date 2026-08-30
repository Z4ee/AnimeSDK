#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceRerollCount; }

#define CLASS_2_9F798DB52082FDD6_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1C0AA7B0)
#define CLASS_2_9F798DB52082FDD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AA7A0)

inline static constexpr unsigned int Class_2_9F798DB52082FDD6_TypeDefinitionIndex = 35532;

class Class_2_9F798DB52082FDD6 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceRerollCount*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_9F798DB52082FDD6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F798DB52082FDD6_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
