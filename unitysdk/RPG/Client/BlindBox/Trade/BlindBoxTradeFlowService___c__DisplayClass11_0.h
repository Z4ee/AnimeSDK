#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C086E47345F86771_8;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeFlowService; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC895D80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS11_0__GRANTCOMPLETEDORDER_B__0_OFFSET UNITYSDK_OFFSET(0xC898430)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeFlowService___c__DisplayClass11_0_TypeDefinitionIndex = 74895;

	class BlindBoxTradeFlowService___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeFlowService* __4__this; // 0x10
		::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* order; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* _GrantCompletedOrder_b__0(::Class_1_C086E47345F86771_8* a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::Class_1_C086E47345F86771_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__DISPLAYCLASS11_0__GRANTCOMPLETEDORDER_B__0_OFFSET))(this, a1);
		}
	};
}
