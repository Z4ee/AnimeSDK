#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ShareSource_TypeDefinitionIndex = 58360;

	enum class ShareSource : ::System::Int32
	{
		Unknown = 0,
		Gacha = 1,
		PhotoGraph = 2,
		TravelBrochure = 3,
		Monopoly = 4,
		PlanetFes = 5,
		ElfRestaurant = 6,
		PamChat = 7,
	};
}
