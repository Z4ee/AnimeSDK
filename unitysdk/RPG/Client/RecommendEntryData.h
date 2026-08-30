#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RecommendDisplayConfig; }
namespace System { class String; }

#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1B654280)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6542C0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1B654260)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_HASDISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6542E0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_HIDEAFTERSELL_OFFSET UNITYSDK_OFFSET(0x1B6541A0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B654140)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B6541E0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B654240)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B654200)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDERAFTERSELL_OFFSET UNITYSDK_OFFSET(0x1B654180)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B654160)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B6542A0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1B654220)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B6541C0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1B654290)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6542D0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1B654270)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_HIDEAFTERSELL_OFFSET UNITYSDK_OFFSET(0x1B6541B0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B654150)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B6541F0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1B654250)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x1B654210)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDERAFTERSELL_OFFSET UNITYSDK_OFFSET(0x1B654190)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B654170)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B6542B0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1B654230)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B6541D0)
#define RPG_CLIENT_RECOMMENDENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B654330)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendEntryData_TypeDefinitionIndex = 66803;

	class RecommendEntryData : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _GoodsID_k__BackingField; // 0x18
		::RPG::Client::RecommendDisplayConfig* _DisplayConfig_k__BackingField; // 0x20
		::System::String* _NameText_k__BackingField; // 0x28
		::System::UInt32 _OrderAfterSell_k__BackingField; // 0x30
		::System::UInt32 _ShopID_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::UInt32 _ItemID_k__BackingField; // 0x3C
		::System::Boolean _HideAfterSell_k__BackingField; // 0x40
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x44
		::System::UInt32 _Type_k__BackingField; // 0x48
		::System::UInt32 _Schedule_k__BackingField; // 0x4C
		::System::UInt32 _Order_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderAfterSell()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDERAFTERSELL_OFFSET))(this);
		}

		::System::Void set_OrderAfterSell(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDERAFTERSELL_OFFSET))(this, a1);
		}

		::System::Boolean get_HideAfterSell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_HIDEAFTERSELL_OFFSET))(this);
		}

		::System::Void set_HideAfterSell(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_HIDEAFTERSELL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Type()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_NameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_NAMETEXT_OFFSET))(this);
		}

		::System::Void set_NameText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_NAMETEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_GoodsID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsID(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_GOODSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Schedule()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Void set_Schedule(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_SCHEDULE_OFFSET))(this, a1);
		}

		::RPG::Client::RecommendDisplayConfig* get_DisplayConfig()
		{
			return ((::RPG::Client::RecommendDisplayConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_DISPLAYCONFIG_OFFSET))(this);
		}

		::System::Void set_DisplayConfig(::RPG::Client::RecommendDisplayConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RecommendDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_DISPLAYCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDisplayConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_HASDISPLAYCONFIG_OFFSET))(this);
		}
	};
}
