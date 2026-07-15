#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ItemType_TypeDefinitionIndex = 70741;

	enum class ItemType : ::System::Int32
	{
		Obstacle = 0,
		SpeedUp = 1,
		SkillEnergy = 2,
		Boom = 3,
	};
}
