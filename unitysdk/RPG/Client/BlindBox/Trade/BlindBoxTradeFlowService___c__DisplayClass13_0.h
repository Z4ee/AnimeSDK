#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_176;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFlowService; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC88F100)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS13_0__PUBLISHPRIVATEHIDDENORDER_B__0_OFFSET UNITYSDK_OFFSET(0xC8910B0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFlowService___c__DisplayClass13_0_TypeDefinitionIndex = 74896;

	class BlindBoxTradeFlowService___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* __4__this; // 0x10
		::System::UInt32 buyerUid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PublishPrivateHiddenOrder_b__0(::Class_1_D17272E82AE804C2_176* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_176*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS13_0__PUBLISHPRIVATEHIDDENORDER_B__0_OFFSET))(this, a1);
		}
	};
}
