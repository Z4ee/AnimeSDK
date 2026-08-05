#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/DayOfWeekFlag.h"
#include "unitysdk/NPCCrowd/AI/TimePeriodTypeFlag.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_TIMECONDITION_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x7B1F10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimeCondition_TypeDefinitionIndex = 79649;

	struct alignas(4) TimeCondition
	{
		::NPCCrowd::AI::TimePeriodTypeFlag periodType; // 0x10
		::NPCCrowd::AI::DayOfWeekFlag dayOfWeek; // 0x14

		::System::Boolean CheckCondition(::ProtoScript::TimePeriodType period, ::System::DayOfWeek day)
		{
			return ((::System::Boolean(*)(::PVOID, ::ProtoScript::TimePeriodType, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TIMECONDITION_CHECKCONDITION_OFFSET))(this, period, day);
		}
	};
}
