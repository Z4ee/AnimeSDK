#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BoolValueGetterType.h"
#include "unitysdk/NPCCrowd/AI/CompareCondition.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_BOOLCOMPARECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x125FBC50)
#define NPCCROWD_AI_BOOLCOMPARECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x125FBC40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int BoolCompareCondition_TypeDefinitionIndex = 56801;

	class BoolCompareCondition : public ::NPCCrowd::AI::CompareCondition
	{
	public:
		::NPCCrowd::AI::BoolValueGetterType getValueType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLCOMPARECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_BOOLCOMPARECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
