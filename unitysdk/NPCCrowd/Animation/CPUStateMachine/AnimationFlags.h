#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 78966;

	enum class AnimationFlags : ::System::Byte
	{
		RootMotion = 0x2,
		PhaseMatching = 0x4,
		StripBipMotion = 0x20,
		None = 0x0,
		AdjustmentBlending = 0x10,
		MultipleClips = 0x8,
		Looping = 0x1,
	};
}
