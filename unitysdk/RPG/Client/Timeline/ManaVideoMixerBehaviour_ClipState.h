#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_ClipState_TypeDefinitionIndex = 67549;

	enum class ManaVideoMixerBehaviour_ClipState : ::System::Int32
	{
		Idle = 0,
		Prepare = 1,
		Play = 2,
		Seek = 3,
	};
}
