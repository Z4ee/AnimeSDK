#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define STATETREEGAMEPLAY_GRAPHEVENTCONTEXTSTATE_FLUSHSENDEVENT_OFFSET UNITYSDK_OFFSET(0x881D20)
#define STATETREEGAMEPLAY_GRAPHEVENTCONTEXTSTATE_TRIGGERSENDEVENT_OFFSET UNITYSDK_OFFSET(0x881CB0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GraphEventContextState_TypeDefinitionIndex = 40808;

	struct alignas(4) GraphEventContextState
	{
		::StateTreeGameplay::ContextTrigger Trigger; // 0x10
		::Foundation::Unreal::FGameplayTag EventTag; // 0x14

		::System::Boolean TriggerSendEvent(::Foundation::Unreal::FGameplayTag eventTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GRAPHEVENTCONTEXTSTATE_TRIGGERSENDEVENT_OFFSET))(this, eventTag);
		}

		::System::Void FlushSendEvent(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GRAPHEVENTCONTEXTSTATE_FLUSHSENDEVENT_OFFSET))(this, entity);
		}
	};
}
