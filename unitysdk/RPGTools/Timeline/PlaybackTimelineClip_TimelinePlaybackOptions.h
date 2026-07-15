#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaybackTimelineClip_TimelinePlaybackOptions_TypeDefinitionIndex = 46667;

	enum class PlaybackTimelineClip_TimelinePlaybackOptions : ::System::Int32
	{
		None = 0,
		Marker = 1,
		JumpToMaker = 2,
		JumpToTime = 3,
	};
}
