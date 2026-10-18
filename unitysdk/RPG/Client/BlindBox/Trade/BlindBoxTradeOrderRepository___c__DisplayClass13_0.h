#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_5;
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeOrderRepository; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC89D770)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__LOADHISTORYORDERS_B__0_OFFSET UNITYSDK_OFFSET(0xC8A2FD0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__LOADHISTORYORDERS_B__1_OFFSET UNITYSDK_OFFSET(0xC8A30D0)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeOrderRepository___c__DisplayClass13_0_TypeDefinitionIndex = 74873;

	class BlindBoxTradeOrderRepository___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* __4__this; // 0x10
		::System::Action_1<::Class_1_28D410CCE235575F_5*>* __9__1; // 0x18
		::System::UInt32 offset; // 0x20
		::System::UInt32 count; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _LoadHistoryOrders_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__LOADHISTORYORDERS_B__0_OFFSET))(this);
		}

		::System::Void _LoadHistoryOrders_b__1(::Class_1_28D410CCE235575F_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEORDERREPOSITORY___C__DISPLAYCLASS13_0__LOADHISTORYORDERS_B__1_OFFSET))(this, a1);
		}
	};
}
