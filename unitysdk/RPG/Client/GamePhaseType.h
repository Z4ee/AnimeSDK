#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseType_TypeDefinitionIndex = 58391;

	enum class GamePhaseType : ::System::Int32
	{
		Unknown = 0,
		ClientStartup = 1,
		DevClientStartup = 2,
		GameDev = 3,
		VersionUpdate = 4,
		EnterGame = 5,
		InitGame = 6,
		SelectServer = 7,
		SDKLogin = 8,
		LoginWait = 9,
		FullPackageDownload = 10,
		PreDownload = 11,
		VersionUpdateCheck = 12,
		Adventure = 13,
		BattleLineup = 14,
		BattleLineupV2 = 15,
		QABattleLineup = 16,
		Battle = 17,
		BattleNew = 18,
		Replay = 19,
		DevLevel = 20,
		RenderTest = 21,
		StoryTest = 22,
		AdventureMapTest = 23,
		AssetMemStatisticsTest = 24,
		Empty = 25,
	};
}
