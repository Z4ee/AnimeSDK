#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseType_TypeDefinitionIndex = 49549;

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
		QABattleLineup = 15,
		Battle = 16,
		BattleNew = 17,
		Replay = 18,
		DevLevel = 19,
		RenderTest = 20,
		StoryTest = 21,
		AdventureMapTest = 22,
		AssetMemStatisticsTest = 23,
		Empty = 24,
	};
}
