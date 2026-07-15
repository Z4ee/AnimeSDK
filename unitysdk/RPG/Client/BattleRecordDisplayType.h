#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleRecordDisplayType_TypeDefinitionIndex = 61340;

	enum class BattleRecordDisplayType : ::System::Int32
	{
		None = 0,
		ChallengeMemory = 1,
		ChallengeStory = 2,
		ChallengeBoss = 3,
		ChallengePeak = 4,
		TournRogue = 5,
		ChessRogue = 6,
		ChessNousRogue = 7,
		MagicRogue = 8,
		GridFight = 9,
	};
}
