#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderType.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeState.h"

namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradePlayerInfo; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int IBlindBoxTradeOrder_TypeDefinitionIndex = 74874;

	class IBlindBoxTradeOrder
	{
	public:
	};
}
