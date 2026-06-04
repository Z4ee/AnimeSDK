#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingItemVisibleReason_TypeDefinitionIndex = 69004;

	enum class StreamingItemVisibleReason : ::System::Int32
	{
		Scene = 0,
		Entity = 1,
		Puzzle = 2,
		TrainBuild = 3,
		Task = 4,
		Environment = 5,
		ItemEnable = 6,
		Override = 7,
	};
}
