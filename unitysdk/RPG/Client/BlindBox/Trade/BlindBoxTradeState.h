#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeState_TypeDefinitionIndex = 74877;

	enum class BlindBoxTradeState : ::System::Int32
	{
		None = 0,
		Published = 1,
		BuyerConfirmed = 2,
		SellerConfirmed = 3,
		Finished = 4,
		Cancelled = 5,
	};
}
