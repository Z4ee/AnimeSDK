#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceSyncReason_TypeDefinitionIndex = 34889;

	enum class CakeRaceSyncReason : ::System::Int32
	{
		Default = 0,
		LevelStateChange = 1,
	};
}
