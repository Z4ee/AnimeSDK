#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_BlockType_TypeDefinitionIndex = 63234;

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
		SocialPlay = 10,
		PlanetFes = 11,
		Trade = 12,
		SuggestionPlainText = 13,
		AvatarGrowth = 14,
		SelectGrowthTarget = 15,
		LightConeRecommend = 16,
		RelicRank = 17,
		RelicRecommend = 18,
		ChallengeTeam = 19,
		ChallengePeakTeam = 20,
		TeamBuild = 21,
		Quest = 22,
		QuickFunction = 23,
		RelicExplain = 24,
		TeamExplain = 25,
		PamTouch = 26,
		Context = 27,
		Feedback = 28,
		Suggestion = 29,
		Typing = 30,
	};
}
