#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSelectEventSenderType_TypeDefinitionIndex = 10990;

	enum class RestaurantSelectEventSenderType : ::System::Int32
	{
		Unknown = 0,
		NPC = 1,
		Player = 2,
		System = 3,
		Customer = 4,
	};
}
