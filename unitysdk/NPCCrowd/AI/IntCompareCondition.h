#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CompareCondition.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/IntValueGetterType.h"

#define NPCCROWD_AI_INTCOMPARECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0xD22DD80)
#define NPCCROWD_AI_INTCOMPARECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xD22DD70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int IntCompareCondition_TypeDefinitionIndex = 54204;

	class IntCompareCondition : public ::NPCCrowd::AI::CompareCondition
	{
	public:
		::NPCCrowd::AI::IntValueGetterType getValueType; // 0x20
		::System::Int32 checkValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTCOMPARECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTCOMPARECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
