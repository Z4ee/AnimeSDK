#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }

#define NPCCROWD_AI_CROWDTAGCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x119208B0)
#define NPCCROWD_AI_CROWDTAGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x119208A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdTagCondition_TypeDefinitionIndex = 55017;

	class CrowdTagCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDTAGCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDTAGCONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
