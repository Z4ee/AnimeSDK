#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8964B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS17_0__REMOVEMYCURRENTORDER_B__0_OFFSET UNITYSDK_OFFSET(0xC89BB50)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository___c__DisplayClass17_0_TypeDefinitionIndex = 74873;

	class BlindBoxTradeOrderRepository___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt64 orderUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveMyCurrentOrder_b__0(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS17_0__REMOVEMYCURRENTORDER_B__0_OFFSET))(this, a1);
		}
	};
}
