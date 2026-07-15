#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParticlePlaybackStatus_TypeDefinitionIndex = 66946;

	enum class ParticlePlaybackStatus : ::System::Int32
	{
		kIsStopped = 0,
		kIsPlayingForward = 1,
		kIsPlayingBackward = 2,
		kCleanup = 4,
		kPaused = 5,
		kPausedBackward = 6,
	};
}
