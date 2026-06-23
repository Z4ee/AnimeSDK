#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"

#define STATETREEGAMEPLAY_ANIMATIONSTATE_PLAY_OFFSET UNITYSDK_OFFSET(0x970290)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 61132;

	struct alignas(4) AnimationState
	{
		::System::Boolean IsPlaying; // 0x10
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x11
		::System::Int32 AnimationID; // 0x14

		::System::Boolean Play(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ANIMATIONSTATE_PLAY_OFFSET))(this, animationID);
		}
	};
}
