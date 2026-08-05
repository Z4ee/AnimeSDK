#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTrackTypeFlags_TypeDefinitionIndex = 88773;

	enum class MontageTrackTypeFlags : ::System::Byte
	{
		SequenceTrack = 0x2,
		None = 0x0,
		AnimTrack = 0x1,
	};
}
