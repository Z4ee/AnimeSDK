#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController_ItemType_TypeDefinitionIndex = 63534;

	enum class PlanetFesFloatingController_ItemType : ::System::Int32
	{
		None = 0,
		Diamond = 1,
		Card = 2,
		Ticket = 3,
		GoldTicket = 4,
		ColorfulTicket = 5,
		Skill = 6,
	};
}
