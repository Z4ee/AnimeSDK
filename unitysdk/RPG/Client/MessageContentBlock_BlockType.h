#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_BlockType_TypeDefinitionIndex = 51320;

	enum class MessageContentBlock_BlockType : ::System::Int32
	{
		None = 0,
		PlainText = 1,
		Emoji = 2,
		Hyperlink = 3,
		Goto = 4,
		Image = 5,
		Raid = 6,
		Video = 7,
		Link = 8,
		Invite = 9,
		PlanetFes = 10,
		AvatarGrowth = 11,
		SelectGrowthTarget = 12,
		LightConeRecommend = 13,
		RelicRank = 14,
		RelicRecommend = 15,
		ChallengeTeam = 16,
		ChallengePeakTeam = 17,
		TeamBuild = 18,
		QuickFunction = 19,
		RelicExplain = 20,
		TeamExplain = 21,
		PamTouch = 22,
		Context = 23,
		Feedback = 24,
		Suggestion = 25,
		Typing = 26,
	};
}
