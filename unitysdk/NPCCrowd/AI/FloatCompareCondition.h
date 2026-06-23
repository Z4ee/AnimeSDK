#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CompareCondition.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/FloatValueGetterType.h"

#define NPCCROWD_AI_FLOATCOMPARECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0xD5AB820)
#define NPCCROWD_AI_FLOATCOMPARECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xD5AB810)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FloatCompareCondition_TypeDefinitionIndex = 57764;

	class FloatCompareCondition : public ::NPCCrowd::AI::CompareCondition
	{
	public:
		::NPCCrowd::AI::FloatValueGetterType getValueType; // 0x20
		::System::Single checkValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATCOMPARECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATCOMPARECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
