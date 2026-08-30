#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent_TypeDefinitionIndex = 77512;

	struct alignas(8) MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent
	{
		::System::String* AnimatorStateName; // 0x10
		::System::String* AudioPlayEventName; // 0x18
		::System::Single PlayAudioDelayTime; // 0x20
	};
}
