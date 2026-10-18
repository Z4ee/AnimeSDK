#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EImpactType_TypeDefinitionIndex = 42915;

	enum class EImpactType : ::System::Int32
	{
		Unknown = 0,
		CarCollision = 1,
	};
}
