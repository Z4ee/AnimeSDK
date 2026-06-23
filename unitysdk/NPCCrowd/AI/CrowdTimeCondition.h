#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/DayOfWeekFlag.h"
#include "unitysdk/NPCCrowd/AI/TimePeriodTypeFlag.h"

#define NPCCROWD_AI_CROWDTIMECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0xD403E60)
#define NPCCROWD_AI_CROWDTIMECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xD403E50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdTimeCondition_TypeDefinitionIndex = 41989;

	class CrowdTimeCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::NPCCrowd::AI::TimePeriodTypeFlag periodType; // 0x18
		::NPCCrowd::AI::DayOfWeekFlag dayOfWeek; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDTIMECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDTIMECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
