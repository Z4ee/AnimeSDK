#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowQuestType_TypeDefinitionIndex = 17114;

	enum class EHollowQuestType : ::System::Int16
	{
		MainQuest = 1,
		AbyssS2_Period = 20,
		SideQuest = 2,
		DreamNormal = 23,
		RallyBattle = 13,
		DifficutyBattle = 12,
		DreamEndLess = 24,
		AbyssS2_Story = 19,
		BossRushBattle = 14,
		World = 8,
		AbyssS2_ThirdLoop = 33,
		MainQuestChessboard = 21,
		AbyssS2_RoleChallenge = 22,
		HackerActivity = 16,
		Common = 0,
		MonsterFantasyStory = 30,
		UrgentSupplement = 4,
		AbyssS2_HobaPrefac = 26,
		AvatarSide = 7,
		ChallengeChaos = 6,
		GoldenMechaBoo = 31,
		TheGun = 18,
		Urgent = 3,
		MusicBattle = 32,
		EnumCount = 34,
		AbyssS2_Event = 25,
		Challenge = 5,
		NormalBattle = 10,
		Arpeggio = 17,
		NestVeryHard = 15,
		PromoteBattle = 11,
	};
}
