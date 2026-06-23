#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int DelayNpcAudioTriggerEvent_TypeDefinitionIndex = 40505;

	struct alignas(8) DelayNpcAudioTriggerEvent
	{
		::System::String* TriggerEvent; // 0x10
		::System::String* SoundActionKey; // 0x18
		::UnityEngine::GameObject* AudioEmitter; // 0x20
	};
}
