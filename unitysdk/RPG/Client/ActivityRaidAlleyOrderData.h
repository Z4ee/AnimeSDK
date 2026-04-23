#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyOrderStatus.h"
#include "unitysdk/RPG/Client/AlleyOrderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityRaidOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERCONTENT_OFFSET UNITYSDK_OFFSET(0x9C557F0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERGOODS_OFFSET UNITYSDK_OFFSET(0x9C55870)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x9C55740)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERSHIP_OFFSET UNITYSDK_OFFSET(0x9C558F0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSPATH_OFFSET UNITYSDK_OFFSET(0x9C55970)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ORDERTIPSTIME_OFFSET UNITYSDK_OFFSET(0x9C559F0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9C55780)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9C55760)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9C55750)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9C55770)
#define RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C55720)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRaidAlleyOrderData_TypeDefinitionIndex = 57410;

	class ActivityRaidAlleyOrderData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRaidOrderRow* _Row; // 0x10
		::RPG::Client::AlleyOrderStatus _Status_k__BackingField; // 0x18
		::System::UInt32 _OrderID_k__BackingField; // 0x1C
		::RPG::Client::AlleyOrderType _Type_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 orderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA__CTOR_OFFSET))(this, orderID);
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

		::System::Void set_Status(::RPG::Client::AlleyOrderStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyOrderStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYORDERDATA_SET_STATUS_OFFSET))(this, value);
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
