#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeScope_TypeDefinitionIndex = 74852;

	enum class BlindBoxTradeScope : ::System::UInt32
	{
		All = 0x1,
		Public = 0x2,
		Private = 0x3,
	};
}
