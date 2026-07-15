#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkEventPlayableBehavior_Actions_TypeDefinitionIndex = 42124;

enum class AkEventPlayableBehavior_Actions : ::System::Int32
{
	None = 0,
	Playback = 1,
	Retrigger = 2,
	DelayedStop = 4,
	Seek = 8,
	FadeIn = 16,
	FadeOut = 32,
};
