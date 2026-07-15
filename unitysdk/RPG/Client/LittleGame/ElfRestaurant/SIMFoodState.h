#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int SIMFoodState_TypeDefinitionIndex = 41040;

	enum class SIMFoodState : ::System::Int32
	{
		Unknown = 0,
		Ready = 1,
		Fetching = 2,
		Delivery = 3,
	};
}
