#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameController_PlanetFesGamePlayDragModeEnum_TypeDefinitionIndex = 63548;

	enum class PlanetFesGameController_PlanetFesGamePlayDragModeEnum : ::System::Int32
	{
		None = 0,
		Roaming = 1,
		EquipAvatar = 2,
		Manage = 3,
		Gathering = 4,
		Deliver = 5,
		Entrance = 6,
	};
}
