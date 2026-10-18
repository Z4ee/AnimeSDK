#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderType.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradePlayerInfo; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_BUYER_OFFSET UNITYSDK_OFFSET(0xC8AB0D0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xC8AAFB0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC8AAFD0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xC8AB090)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ISHIDDENORDER_OFFSET UNITYSDK_OFFSET(0xC8AAF70)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_OFFEREDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xC8AB030)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0xC8AAF90)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0xC8AAF20)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_REQUESTEDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xC8AB010)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_SELLER_OFFSET UNITYSDK_OFFSET(0xC8AB0B0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_SOLDTIME_OFFSET UNITYSDK_OFFSET(0xC8AAFF0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC8AB050)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_TARGETPLAYERUID_OFFSET UNITYSDK_OFFSET(0xC8AB070)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_BUYER_OFFSET UNITYSDK_OFFSET(0xC8AB0E0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xC8AAFC0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC8AAFE0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xC8AB0A0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_ISHIDDENORDER_OFFSET UNITYSDK_OFFSET(0xC8AAF80)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_OFFEREDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xC8AB040)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0xC8AAFA0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_REQUESTEDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xC8AB020)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_SELLER_OFFSET UNITYSDK_OFFSET(0xC8AB0C0)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_SOLDTIME_OFFSET UNITYSDK_OFFSET(0xC8AB000)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC8AB060)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_TARGETPLAYERUID_OFFSET UNITYSDK_OFFSET(0xC8AB080)
#define RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8AAF10)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int PrivateBlindBoxTradeOrder_TypeDefinitionIndex = 74878;

	class PrivateBlindBoxTradeOrder : public ::System::Object
	{
	public:
		::RPG::Client::Pet::BlindBox::IBlindBoxPet* _OfferedBlindBoxPet_k__BackingField; // 0x10
		::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* _Seller_k__BackingField; // 0x18
		::RPG::Client::Pet::BlindBox::IBlindBoxPet* _RequestedBlindBoxPet_k__BackingField; // 0x20
		::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* _Buyer_k__BackingField; // 0x28
		::System::UInt64 _SoldTime_k__BackingField; // 0x30
		::System::UInt32 _TargetPlayerUid_k__BackingField; // 0x38
		::System::Boolean _HasTakenReward_k__BackingField; // 0x3C
		::System::Boolean _IsHiddenOrder_k__BackingField; // 0x3D
		::RPG::Client::BlindBox::Trade::BlindBoxTradeState _State_k__BackingField; // 0x40
		::System::UInt64 _ExpireTime_k__BackingField; // 0x48
		::System::UInt64 _CreateTime_k__BackingField; // 0x50
		::System::UInt64 _OrderID_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType get_OrderType()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ORDERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsHiddenOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ISHIDDENORDER_OFFSET))(this);
		}

		::System::Void set_IsHiddenOrder(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_ISHIDDENORDER_OFFSET))(this, a1);
		}

		::System::UInt64 get_OrderID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_ORDERID_OFFSET))(this);
		}

		::System::Void set_OrderID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_ORDERID_OFFSET))(this, a1);
		}

		::System::UInt64 get_CreateTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_CREATETIME_OFFSET))(this);
		}

		::System::Void set_CreateTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_CREATETIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_ExpireTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_EXPIRETIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_SoldTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_SOLDTIME_OFFSET))(this);
		}

		::System::Void set_SoldTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_SOLDTIME_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* get_RequestedBlindBoxPet()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_REQUESTEDBLINDBOXPET_OFFSET))(this);
		}

		::System::Void set_RequestedBlindBoxPet(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_REQUESTEDBLINDBOXPET_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* get_OfferedBlindBoxPet()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_OFFEREDBLINDBOXPET_OFFSET))(this);
		}

		::System::Void set_OfferedBlindBoxPet(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_OFFEREDBLINDBOXPET_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradeState get_State()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::BlindBox::Trade::BlindBoxTradeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_STATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetPlayerUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_TARGETPLAYERUID_OFFSET))(this);
		}

		::System::Void set_TargetPlayerUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_TARGETPLAYERUID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_HASTAKENREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* get_Seller()
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_SELLER_OFFSET))(this);
		}

		::System::Void set_Seller(::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_SELLER_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* get_Buyer()
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_GET_BUYER_OFFSET))(this);
		}

		::System::Void set_Buyer(::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_PRIVATEBLINDBOXTRADEORDER_SET_BUYER_OFFSET))(this, a1);
		}
	};
}
