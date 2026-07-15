#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionTag_TypeDefinitionIndex = 10595;

	enum class CakeRaceRegionTag : ::System::Int32
	{
		Normal = 0,
		PushPlate = 1,
		BouncePlate = 2,
		Mod = 3,
		Ice = 4,
		Slide = 5,
		Toilet = 6,
		Travelator = 7,
		Bubble = 8,
		Mix = 9,
		Special = 10,
		Special2 = 11,
		Special3 = 12,
		Special4 = 13,
		Special5 = 14,
	};
}
