#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary_TypeDefinitionIndex = 74871;

	struct alignas(1) BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary
	{
		::System::Boolean HasAvailableInstance; // 0x10
		::System::Boolean HasCdInstance; // 0x11
		::System::Boolean HasLockedInstance; // 0x12
	};
}
