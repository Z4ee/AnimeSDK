#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 44573;

	enum class AnimationFlags : ::System::Byte
	{
		PhaseMatching = 0x4,
		None = 0x0,
		StripBipMotion = 0x20,
		Looping = 0x1,
		MultipleClips = 0x8,
		RootMotion = 0x2,
		AdjustmentBlending = 0x10,
	};
}
