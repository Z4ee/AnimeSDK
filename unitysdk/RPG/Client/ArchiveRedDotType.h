#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveRedDotType_TypeDefinitionIndex = 59655;

	enum class ArchiveRedDotType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Monster = 2,
		LightCone = 3,
		Relic = 4,
		Noun = 5,
		AvatarVoice = 6,
		AvatarVoiceTab = 7,
		AvatarStory = 8,
		AvatarStoryTab = 9,
		AvatarChangeInfo = 10,
	};
}
