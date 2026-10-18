#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderPetItemKind_TypeDefinitionIndex = 74886;

	enum class BlindBoxTradePublishOrderPetItemKind : ::System::Int32
	{
		Offer = 1,
		Request = 2,
	};
}
