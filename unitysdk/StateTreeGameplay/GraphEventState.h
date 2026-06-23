#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"

#define STATETREEGAMEPLAY_GRAPHEVENTSTATE_SEND_OFFSET UNITYSDK_OFFSET(0x92F560)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GraphEventState_TypeDefinitionIndex = 60268;

	struct alignas(4) GraphEventState
	{
		::StateTreeGameplay::ContextTrigger Trigger; // 0x10
		::Foundation::Unreal::FGameplayTag EventTag; // 0x14

		::System::Boolean Send(::Foundation::Unreal::FGameplayTag eventTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GRAPHEVENTSTATE_SEND_OFFSET))(this, eventTag);
		}
	};
}
