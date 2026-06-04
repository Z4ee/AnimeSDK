#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyOrderStatus.h"
#include "unitysdk/RPG/Client/AlleyOrderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyGoodData; }
namespace RPG::Client { class AlleySpecialOrderTarget; }
namespace RPG::GameCore { class ActivityRaidSpecialOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xB1F7130)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0xB1F70E0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERTIPSPATH_OFFSET UNITYSDK_OFFSET(0xB1F7230)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERTIPSTIME_OFFSET UNITYSDK_OFFSET(0xB1F72B0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB1F7140)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERCONTENT_OFFSET UNITYSDK_OFFSET(0xB1F6FE0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERGOODS_OFFSET UNITYSDK_OFFSET(0xB1F7060)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERSHIP_OFFSET UNITYSDK_OFFSET(0xB1F71B0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB1F7100)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xB1F7120)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB1F70F0)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB1F7110)
#define RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F6D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRaidAlleySpecialOrderData_TypeDefinitionIndex = 58223;

	class ActivityRaidAlleySpecialOrderData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRaidSpecialOrderRow* _Row; // 0x10
		::Il2CppArray<::RPG::Client::AlleyGoodData*>* _Goods_k__BackingField; // 0x18
		::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>* _Targets_k__BackingField; // 0x20
		::RPG::Client::AlleyOrderType _Type_k__BackingField; // 0x28
		::RPG::Client::AlleyOrderStatus _Status_k__BackingField; // 0x2C
		::System::UInt32 _OrderID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERID_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderType get_Type()
		{
			return ((::RPG::Client::AlleyOrderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderStatus get_Status()
		{
			return ((::RPG::Client::AlleyOrderStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::AlleyOrderStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyOrderStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>* get_Targets()
		{
			return ((::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_TARGETS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::AlleyGoodData*>* get_Goods()
		{
			return ((::Il2CppArray<::RPG::Client::AlleyGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_GOODS_OFFSET))(this);
		}

		::RPG::GameCore::ActivityRaidSpecialOrderRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityRaidSpecialOrderRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOrderShip()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERSHIP_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::GoodsClass*>* get_SpecialOrderGoods()
		{
			return ((::Il2CppArray<::RPG::GameCore::GoodsClass*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERGOODS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialOrderContent()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_SPECIALORDERCONTENT_OFFSET))(this);
		}

		::System::String* get_OrderTipsPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERTIPSPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderTipsTime()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRAIDALLEYSPECIALORDERDATA_GET_ORDERTIPSTIME_OFFSET))(this);
		}
	};
}
