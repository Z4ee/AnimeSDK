#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_DoorSide_TypeDefinitionIndex = 80813;

	enum class AirlineSubwayWay_DoorSide : ::System::Int32
	{
		Right = 0,
		Left = 1,
		All = 2,
		None = 3,
	};
}
