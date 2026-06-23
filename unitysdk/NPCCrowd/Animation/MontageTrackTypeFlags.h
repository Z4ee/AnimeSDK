#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTrackTypeFlags_TypeDefinitionIndex = 58293;

	enum class MontageTrackTypeFlags : ::System::Byte
	{
		AnimTrack = 0x1,
		None = 0x0,
		SequenceTrack = 0x2,
	};
}
