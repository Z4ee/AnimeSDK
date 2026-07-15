#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleNetWorkMsg_TypeDefinitionIndex = 40497;

	enum class MarbleNetWorkMsg : ::System::Int32
	{
		None = 0,
		PlayerEnter = 1,
		PerformanceFinish = 2,
		LoadFinish = 3,
		SimulateFinish = 4,
		Launch = 5,
		UseTech = 6,
		TechFinish = 7,
		Emoji = 8,
		SnapShot = 9,
		SyncBatch = 10,
		GameStart = 11,
		SyncNotify = 12,
		GameFinish = 13,
		SyncSnapShot = 14,
		Operation = 15,
	};
}
