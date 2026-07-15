#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_LoadingType_TypeDefinitionIndex = 57855;

	enum class LoadingManager_LoadingType : ::System::Int32
	{
		None = 0,
		LoadMap = 1,
		MazeToBattle = 2,
		BattleToMaze = 3,
		DesignDataLoad = 4,
		DesignDataUpdate = 5,
		BattleToBattle = 6,
		EnterPerformance = 7,
		LeavePerformance = 8,
	};
}
