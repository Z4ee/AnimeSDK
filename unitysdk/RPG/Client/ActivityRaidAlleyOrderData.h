#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyOrderStatus.h"
#include "unitysdk/RPG/Client/AlleyOrderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityRaidOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERCONTENT_OFFSET UNITYSDK_OFFSET(0xC681A20)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERGOODS_OFFSET UNITYSDK_OFFSET(0xC681AD0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0xC681970)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERSHIP_OFFSET UNITYSDK_OFFSET(0xC681B80)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSPATH_OFFSET UNITYSDK_OFFSET(0xC681C30)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSTIME_OFFSET UNITYSDK_OFFSET(0xC681CE0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC6819B0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC681990)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC681980)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC6819A0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC681950)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRaidAlleyOrderData_TypeDefinitionIndex = 62323;

	class ActivityRaidAlleyOrderData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRaidOrderRow* _Row; // 0x10
		::System::UInt32 _OrderID_k__BackingField; // 0x18
		::RPG::Client::AlleyOrderStatus _Status_k__BackingField; // 0x1C
		::RPG::Client::AlleyOrderType _Type_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERID_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderType get_Type()
		{
			return ((::RPG::Client::AlleyOrderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderStatus get_Status()
		{
			return ((::RPG::Client::AlleyOrderStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::AlleyOrderStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyOrderStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRaidOrderRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityRaidOrderRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ROW_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::GoodsClass*>* get_OrderContent()
		{
			return ((::Il2CppArray<::RPG::GameCore::GoodsClass*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERCONTENT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderGoods()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERGOODS_OFFSET))(this);
		}

		::System::UInt32 get_OrderShip()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERSHIP_OFFSET))(this);
		}

		::System::String* get_OrderTipsPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderTipsTime()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSTIME_OFFSET))(this);
		}
	};
}
