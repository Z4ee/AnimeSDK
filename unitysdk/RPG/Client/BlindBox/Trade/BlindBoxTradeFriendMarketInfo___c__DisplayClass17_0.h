#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B6145248FA53FF9;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFriendMarketInfo; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC893080)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__0_OFFSET UNITYSDK_OFFSET(0xC8936C0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__1_OFFSET UNITYSDK_OFFSET(0xC893830)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__2_OFFSET UNITYSDK_OFFSET(0xC8939A0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFriendMarketInfo___c__DisplayClass17_0_TypeDefinitionIndex = 74857;

	class BlindBoxTradeFriendMarketInfo___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* filteredSource; // 0x10
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFriendMarketInfo* __4__this; // 0x18
		::Class_1_1B6145248FA53FF9* ctx; // 0x20
		::System::Int32 maxTotalCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __PickPreferredAndFill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__0_OFFSET))(this);
		}

		::System::Void __PickPreferredAndFill_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__1_OFFSET))(this);
		}

		::System::Void __PickPreferredAndFill_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFRIENDMARKETINFO___C__DISPLAYCLASS17_0___PICKPREFERREDANDFILL_B__2_OFFSET))(this);
		}
	};
}
