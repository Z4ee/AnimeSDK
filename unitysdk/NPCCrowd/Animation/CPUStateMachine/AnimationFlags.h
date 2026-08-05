#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 86400;

	enum class AnimationFlags : ::System::Byte
	{
		RootMotion = 0x2,
		AdjustmentBlending = 0x10,
		Looping = 0x1,
		None = 0x0,
		MultipleClips = 0x8,
		StripBipMotion = 0x20,
		PhaseMatching = 0x4,
	};
}
