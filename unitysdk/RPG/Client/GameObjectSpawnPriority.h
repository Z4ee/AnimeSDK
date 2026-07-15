#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectSpawnPriority_TypeDefinitionIndex = 56735;

	enum class GameObjectSpawnPriority : ::System::Int32
	{
		Immediately = 0,
		High = 1,
		Default = 2,
		Low = 3,
		Count = 4,
	};
}
