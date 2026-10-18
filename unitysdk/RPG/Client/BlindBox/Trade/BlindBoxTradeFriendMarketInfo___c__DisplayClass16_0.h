#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B6145248FA53FF9;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFriendMarketInfo; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC892A90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0___BUILDCURRENTORDERS_B__0_OFFSET UNITYSDK_OFFSET(0xC893630)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFriendMarketInfo___c__DisplayClass16_0_TypeDefinitionIndex = 74856;

	class BlindBoxTradeFriendMarketInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* __4__this; // 0x10
		::Class_1_1B6145248FA53FF9* ctx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildCurrentOrders_b__0(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS16_0___BUILDCURRENTORDERS_B__0_OFFSET))(this, a1);
		}
	};
}
