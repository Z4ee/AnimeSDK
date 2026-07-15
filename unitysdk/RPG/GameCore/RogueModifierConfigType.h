#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConfigType_TypeDefinitionIndex = 10229;

	enum class RogueModifierConfigType : ::System::Int32
	{
		Default = 0,
		DiceRoll = 1,
		Aeon = 2,
		BoardEvent = 3,
		DialogueEvent = 4,
		HistoryMiracle = 5,
		CellMark = 6,
		AeonTalent = 7,
		Teaching = 8,
		BossDecay = 9,
		Record = 10,
		FakeBoardEvent = 11,
		GmMode = 12,
		ActivityEndless = 13,
		NousDiceRoll = 14,
		NousDiceBranch = 15,
		NousDifficulty = 16,
		NousAeon = 17,
		NousEffect = 18,
		Server = 19,
		Miracle = 20,
		WeekChallenge = 21,
		TournTalent = 22,
		Collection = 23,
		DifficultyComp = 24,
		Area = 25,
		Layer = 26,
		MagicTalent = 27,
		TitanBless = 28,
		RoomAttribute = 29,
		PersonaStyle = 30,
		RegionTag = 99999,
	};
}
