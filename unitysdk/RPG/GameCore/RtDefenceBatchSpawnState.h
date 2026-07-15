#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBatchSpawnState_TypeDefinitionIndex = 51844;

	enum class RtDefenceBatchSpawnState : ::System::Int32
	{
		Waiting = 0,
		Spawning = 1,
		SpawnFinish = 2,
		AllDie = 3,
	};
}
