#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkTimelineEventPlayableBehavior_Actions_TypeDefinitionIndex = 42072;

enum class AkTimelineEventPlayableBehavior_Actions : ::System::Int32
{
	None = 0,
	Playback = 1,
	Retrigger = 2,
	DelayedStop = 4,
	Seek = 8,
	FadeIn = 16,
	FadeOut = 32,
};
