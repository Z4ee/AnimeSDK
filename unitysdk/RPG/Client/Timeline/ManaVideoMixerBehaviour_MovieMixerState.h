#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_MovieMixerState_TypeDefinitionIndex = 68502;

	enum class ManaVideoMixerBehaviour_MovieMixerState : ::System::Int32
	{
		Preloading = 0,
		Ready = 1,
		Playing = 2,
		Stopping = 3,
		Stopped = 4,
	};
}
