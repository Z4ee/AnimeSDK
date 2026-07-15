#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotGroupType_TypeDefinitionIndex = 23963;

	enum class RedDotGroupType : ::System::Int32
	{
		Unknown = 0,
		BookHasRead = 1,
		SeenGachaPoolID = 2,
		SeenBuffScheduleChallengeGroupIDs = 3,
		LastRogueSeasonIDs = 4,
		AetherDivideGym = 5,
		PlayerReturn = 6,
		HeliobusSeenPostPhase = 7,
		ActivityPanelNew = 8,
		ActivityPanelSeen = 9,
		ResidentActivityPanelNew = 10,
		ResidentActivityPanelSeen = 11,
		LastAbyssActivityRedDotTimeStamp = 801,
		SeenRogueDiceUnlockAnim = 12,
		HeliobusSeenSkills = 13,
		ActivityPlayerReturnNew = 14,
		ChessRogueSeenDimensionTalentIDs = 100,
		ChessRogueSeenCabinetIDs = 101,
		ChessRogueSeenMainStoryIDs = 102,
		ChessRogueSeenSubStoryIDs = 103,
	};
}
