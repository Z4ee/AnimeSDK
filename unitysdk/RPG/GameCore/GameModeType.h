#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeType_TypeDefinitionIndex = 10127;

	enum class GameModeType : ::System::Int32
	{
		Unknown = 0,
		Town = 1,
		Maze = 2,
		Train = 3,
		Challenge = 4,
		RogueExplore = 5,
		RogueChallenge = 6,
		TownRoom = 7,
		Raid = 8,
		FarmRelic = 9,
		Client = 10,
		ChallengeActivity = 11,
		ActivityPunkLord = 12,
		RogueAeonRoom = 13,
		TrialActivity = 14,
		AetherDivide = 15,
		ChessRogue = 16,
		TournRogue = 17,
		RelicRogue = 18,
		ArcadeRogue = 19,
		MagicRogue = 20,
		TrainParty = 21,
	};
}
