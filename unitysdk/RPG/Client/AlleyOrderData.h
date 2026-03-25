#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyOrderStatus.h"
#include "unitysdk/RPG/Client/AlleyOrderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_CLIENT_ALLEYORDERDATA_GET_ISONCEFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0x90B9110)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERCONTENT_OFFSET UNITYSDK_OFFSET(0x90B9130)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERGOODS_OFFSET UNITYSDK_OFFSET(0x90B9150)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x90B90D0)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERPROFIT_OFFSET UNITYSDK_OFFSET(0x90B9190)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERSHIP_OFFSET UNITYSDK_OFFSET(0x90B9170)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERTIPSPATH_OFFSET UNITYSDK_OFFSET(0x90B93D0)
#define RPG_CLIENT_ALLEYORDERDATA_GET_ORDERTIPSTIME_OFFSET UNITYSDK_OFFSET(0x90B93F0)
#define RPG_CLIENT_ALLEYORDERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x90B90F0)
#define RPG_CLIENT_ALLEYORDERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x90B90E0)
#define RPG_CLIENT_ALLEYORDERDATA_SET_ISONCEFINISHEDBEFORE_OFFSET UNITYSDK_OFFSET(0x90B9120)
#define RPG_CLIENT_ALLEYORDERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x90B9100)
#define RPG_CLIENT_ALLEYORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90B9080)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyOrderData_TypeDefinitionIndex = 50568;

	class AlleyOrderData : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyOrderRow* Row; // 0x10
		::System::Boolean _IsOnceFinishedBefore_k__BackingField; // 0x18
		::RPG::Client::AlleyOrderType _Type_k__BackingField; // 0x1C
		::System::UInt32 _OrderID_k__BackingField; // 0x20
		::RPG::Client::AlleyOrderStatus _Status_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 orderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA__CTOR_OFFSET))(this, orderID);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERID_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderType get_Type()
		{
			return ((::RPG::Client::AlleyOrderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderStatus get_Status()
		{
			return ((::RPG::Client::AlleyOrderStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::AlleyOrderStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyOrderStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsOnceFinishedBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ISONCEFINISHEDBEFORE_OFFSET))(this);
		}

		::System::Void set_IsOnceFinishedBefore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_SET_ISONCEFINISHEDBEFORE_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::GoodsClass*>* get_OrderContent()
		{
			return ((::Il2CppArray<::RPG::GameCore::GoodsClass*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERCONTENT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderGoods()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERGOODS_OFFSET))(this);
		}

		::System::UInt32 get_OrderShip()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERSHIP_OFFSET))(this);
		}

		::System::UInt32 get_OrderProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERPROFIT_OFFSET))(this);
		}

		::System::String* get_OrderTipsPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERTIPSPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderTipsTime()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYORDERDATA_GET_ORDERTIPSTIME_OFFSET))(this);
		}
	};
}
