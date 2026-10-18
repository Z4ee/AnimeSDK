#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability_TypeDefinitionIndex = 74869;

	enum class BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability : ::System::Int32
	{
		Available = 0,
		Cooldown = 1,
		InTrade = 2,
		Unavailable = 3,
	};
}
