#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8998F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS12_0__REMOVEORDERANDREFILL_B__0_OFFSET UNITYSDK_OFFSET(0xC89AB90)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFriendMarketInfo___c__DisplayClass12_0_TypeDefinitionIndex = 74856;

	class BlindBoxTradeFriendMarketInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* order; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveOrderAndRefill_b__0(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS12_0__REMOVEORDERANDREFILL_B__0_OFFSET))(this, a1);
		}
	};
}
