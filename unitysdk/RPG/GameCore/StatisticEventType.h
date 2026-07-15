#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticEventType_TypeDefinitionIndex = 23855;

	enum class StatisticEventType : ::System::Int32
	{
		None = 0,
		TreasureDungeon_AddExplore = 1,
		TreasureDungeon_OpenGrid = 2,
		TreasureDungeon_PickupItem = 3,
		TreasureDungeon_UseItem = 4,
		TelevisionActivity_UpdateMazeBuffLayer = 5,
		RogueTournTitan_ExtraCoin = 6,
		RogueTournTitan_ExtraCoinTimes = 7,
	};
}
