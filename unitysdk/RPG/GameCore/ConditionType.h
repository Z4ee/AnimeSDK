#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionType_TypeDefinitionIndex = 12580;

	enum class ConditionType : ::System::Int32
	{
		None = 0,
		FinishMainMission = 1,
		PlayerLevel = 2,
		WorldLevel = 3,
		FinishChallenge = 4,
		NotInPlaneType = 5,
		AvatarLevel = 6,
		FinishSubMission = 7,
		FinishQuest = 8,
		MaxPlayerLevel = 9,
		QuestClose = 10,
		CanUseFoodInRogue = 11,
		BetweenSubMission = 12,
		InStoryLine = 13,
		ReleaseContentPackage = 15,
		SubMissionTaken = 16,
		TrainPartyRoomLevel = 17,
		TrainPartyGamePlayChallengeTimes = 18,
		HasItemMainType = 19,
		FinishSimulatedRogueAreaProgress = 20,
		RealFinishSubMission = 21,
		RealFinishMainMission = 22,
		RogueTournExpLevel = 23,
		ElfProgress = 24,
		ElfProgressDay = 25,
		HeroRoomOpen = 26,
		ActivityInTimeLimit = 27,
		OfferingLevel = 28,
		LimaoCondition = 29,
		AvatarPathUnlock = 30,
		ActivityInSchedule = 31,
	};
}
