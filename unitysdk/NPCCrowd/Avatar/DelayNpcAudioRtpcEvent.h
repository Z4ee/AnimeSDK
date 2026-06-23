#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int DelayNpcAudioRtpcEvent_TypeDefinitionIndex = 41236;

	struct alignas(8) DelayNpcAudioRtpcEvent
	{
		::System::Single SpeedPercent; // 0x10
		::UnityEngine::GameObject* AudioEmitter; // 0x18
	};
}
