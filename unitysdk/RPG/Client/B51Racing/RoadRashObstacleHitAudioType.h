#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashObstacleHitAudioType_TypeDefinitionIndex = 80352;

	enum class RoadRashObstacleHitAudioType : ::System::Int32
	{
		None = 0,
		Suleda = 1,
		AdvertBoard = 2,
	};
}
