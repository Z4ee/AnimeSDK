#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayerPauseReason_TypeDefinitionIndex = 67404;

	enum class ManaVideoPlayerPauseReason : ::System::Int32
	{
		Default = 0,
		EndPause = 1,
		PerformanceTimeScaleLock = 2,
		TalkBackgroundCGPauseClip = 3,
	};
}
