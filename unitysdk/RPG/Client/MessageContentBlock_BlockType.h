#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_BlockType_TypeDefinitionIndex = 60447;

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
		SuggestionPlainText = 11,
		AvatarGrowth = 12,
		SelectGrowthTarget = 13,
		LightConeRecommend = 14,
		RelicRank = 15,
		RelicRecommend = 16,
		ChallengeTeam = 17,
		ChallengePeakTeam = 18,
		TeamBuild = 19,
		Quest = 20,
		QuickFunction = 21,
		RelicExplain = 22,
		TeamExplain = 23,
		PamTouch = 24,
		Context = 25,
		Feedback = 26,
		Suggestion = 27,
		Typing = 28,
	};
}
