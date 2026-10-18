#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderType_TypeDefinitionIndex = 74875;

	enum class BlindBoxTradeOrderType : ::System::Int32
	{
		None = 0,
		Private = 1,
		Public = 2,
	};
}
