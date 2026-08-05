#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/DayOfWeekFlag.h"
#include "unitysdk/NPCCrowd/AI/TimePeriodTypeFlag.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }
namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace System { class String; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ReactionConfig_TypeDefinitionIndex = 72870;

	struct alignas(8) ReactionConfig
	{
		::System::UInt32 ID; // 0x10
		::System::String* name; // 0x18
		::System::UInt32 priority; // 0x20
		::Foundation::Unreal::SerializableGameplayTag* tag; // 0x28
		::NPCCrowd::AI::TimePeriodTypeFlag timePeriodType; // 0x30
		::NPCCrowd::AI::DayOfWeekFlag dayOfWeek; // 0x34
		::System::Boolean tagFilter; // 0x38
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x40
		::Il2CppArray<::NPCCrowd::AI::AIActionRefItem*>* actions; // 0x48
	};
}
