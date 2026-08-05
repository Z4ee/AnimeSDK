#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Model { class SDkPlatformGoods_Bp; }
namespace MiHoYo::SDK::Model { class SDkPlatformGoods_Consumable; }
namespace MiHoYo::SDK::Model { class SDkPlatformGoods_Price; }
namespace MiHoYo::SDK::Model { class SDkPlatformGoods_Vip; }
namespace MiHoYo::SDK::Model { class SDkPlatformGoods_VirtualCurrency; }
namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CREATEFROMJSON_OFFSET UNITYSDK_OFFSET(0x14340410)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_BP_OFFSET UNITYSDK_OFFSET(0x1433FFA0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x14340310)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_CONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1433FFE0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_FIRSTPRESENTITEMID_OFFSET UNITYSDK_OFFSET(0x14340190)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_FIRSTPRESENTITEMNUM_OFFSET UNITYSDK_OFFSET(0x143401A0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_DESC_OFFSET UNITYSDK_OFFSET(0x1433FE60)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_ID_OFFSET UNITYSDK_OFFSET(0x1433FE20)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_NAME_OFFSET UNITYSDK_OFFSET(0x1433FE80)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_TYPE_OFFSET UNITYSDK_OFFSET(0x1433FE40)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ISFIRSTCHARGE_OFFSET UNITYSDK_OFFSET(0x143401F0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x14340020)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x14340030)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEM_ID_OFFSET UNITYSDK_OFFSET(0x1433FF40)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LAUNCH_END_TIME_OFFSET UNITYSDK_OFFSET(0x1433FEC0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LAUNCH_START_TIME_OFFSET UNITYSDK_OFFSET(0x1433FEA0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LEVEL_MIN_OFFSET UNITYSDK_OFFSET(0x1433FF60)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x143402C0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_NEXTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x143403B0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_OFFICIALGOODSID_OFFSET UNITYSDK_OFFSET(0x14340250)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_OFFICIAL_GOODS_ID_OFFSET UNITYSDK_OFFSET(0x1433FE00)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRESENTITEMID_OFFSET UNITYSDK_OFFSET(0x14340120)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRESENTITEMNUM_OFFSET UNITYSDK_OFFSET(0x14340130)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x14340000)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_ELIGIBLE_OFFSET UNITYSDK_OFFSET(0x1433FEE0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_INELIGIBLE_CODE_OFFSET UNITYSDK_OFFSET(0x1433FF00)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_INELIGIBLE_REASON_OFFSET UNITYSDK_OFFSET(0x1433FF20)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_REFRESHTYPE_OFFSET UNITYSDK_OFFSET(0x14340360)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_THIRDPARTYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x143402B0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_VIP_OFFSET UNITYSDK_OFFSET(0x1433FFC0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_VIRTUAL_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1433FF80)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_BP_OFFSET UNITYSDK_OFFSET(0x1433FFB0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_CONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1433FFF0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_DESC_OFFSET UNITYSDK_OFFSET(0x1433FE70)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_ID_OFFSET UNITYSDK_OFFSET(0x1433FE30)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_NAME_OFFSET UNITYSDK_OFFSET(0x1433FE90)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_TYPE_OFFSET UNITYSDK_OFFSET(0x1433FE50)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_ITEM_ID_OFFSET UNITYSDK_OFFSET(0x1433FF50)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LAUNCH_END_TIME_OFFSET UNITYSDK_OFFSET(0x1433FED0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LAUNCH_START_TIME_OFFSET UNITYSDK_OFFSET(0x1433FEB0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LEVEL_MIN_OFFSET UNITYSDK_OFFSET(0x1433FF70)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_OFFICIAL_GOODS_ID_OFFSET UNITYSDK_OFFSET(0x1433FE10)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x14340010)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_ELIGIBLE_OFFSET UNITYSDK_OFFSET(0x1433FEF0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_INELIGIBLE_CODE_OFFSET UNITYSDK_OFFSET(0x1433FF10)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_INELIGIBLE_REASON_OFFSET UNITYSDK_OFFSET(0x1433FF30)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_VIP_OFFSET UNITYSDK_OFFSET(0x1433FFD0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_VIRTUAL_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1433FF90)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14340590)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS__CTOR_OFFSET UNITYSDK_OFFSET(0x143413B0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143413C0)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_TypeDefinitionIndex = 79199;

	class SDkPlatformGoods : public ::System::Object
	{
	public:
		// static const ::System::String* Goods_Type_virtual_currency; // 0x0
		// static const ::System::String* Goods_Type_consumable; // 0x0
		::System::String* _official_goods_id_k__BackingField; // 0x10
		::System::String* _goods_id_k__BackingField; // 0x18
		::System::String* _goods_type_k__BackingField; // 0x20
		::System::String* _goods_desc_k__BackingField; // 0x28
		::System::String* _goods_name_k__BackingField; // 0x30
		::System::Int64 _launch_start_time_k__BackingField; // 0x38
		::System::Int64 _launch_end_time_k__BackingField; // 0x40
		::System::Boolean _purchase_eligible_k__BackingField; // 0x48
		::System::Int32 _purchase_ineligible_code_k__BackingField; // 0x4C
		::System::String* _purchase_ineligible_reason_k__BackingField; // 0x50
		::System::Int32 _item_id_k__BackingField; // 0x58
		::System::Int32 _level_min_k__BackingField; // 0x5C
		::MiHoYo::SDK::Model::SDkPlatformGoods_VirtualCurrency* _virtual_currency_k__BackingField; // 0x60
		::MiHoYo::SDK::Model::SDkPlatformGoods_Bp* _bp_k__BackingField; // 0x68
		::MiHoYo::SDK::Model::SDkPlatformGoods_Vip* _vip_k__BackingField; // 0x70
		::MiHoYo::SDK::Model::SDkPlatformGoods_Consumable* _consumable_k__BackingField; // 0x78
		::MiHoYo::SDK::Model::SDkPlatformGoods_Price* _price_k__BackingField; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS__CTOR_OFFSET))(this);
		}

		::System::String* get_official_goods_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_OFFICIAL_GOODS_ID_OFFSET))(this);
		}

		::System::Void set_official_goods_id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_OFFICIAL_GOODS_ID_OFFSET))(this, value);
		}

		::System::String* get_goods_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_ID_OFFSET))(this);
		}

		::System::Void set_goods_id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_ID_OFFSET))(this, value);
		}

		::System::String* get_goods_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_TYPE_OFFSET))(this);
		}

		::System::Void set_goods_type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_TYPE_OFFSET))(this, value);
		}

		::System::String* get_goods_desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_DESC_OFFSET))(this);
		}

		::System::Void set_goods_desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_DESC_OFFSET))(this, value);
		}

		::System::String* get_goods_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_GOODS_NAME_OFFSET))(this);
		}

		::System::Void set_goods_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_GOODS_NAME_OFFSET))(this, value);
		}

		::System::Int64 get_launch_start_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LAUNCH_START_TIME_OFFSET))(this);
		}

		::System::Void set_launch_start_time(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LAUNCH_START_TIME_OFFSET))(this, value);
		}

		::System::Int64 get_launch_end_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LAUNCH_END_TIME_OFFSET))(this);
		}

		::System::Void set_launch_end_time(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LAUNCH_END_TIME_OFFSET))(this, value);
		}

		::System::Boolean get_purchase_eligible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_ELIGIBLE_OFFSET))(this);
		}

		::System::Void set_purchase_eligible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_ELIGIBLE_OFFSET))(this, value);
		}

		::System::Int32 get_purchase_ineligible_code()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_INELIGIBLE_CODE_OFFSET))(this);
		}

		::System::Void set_purchase_ineligible_code(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_INELIGIBLE_CODE_OFFSET))(this, value);
		}

		::System::String* get_purchase_ineligible_reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PURCHASE_INELIGIBLE_REASON_OFFSET))(this);
		}

		::System::Void set_purchase_ineligible_reason(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PURCHASE_INELIGIBLE_REASON_OFFSET))(this, value);
		}

		::System::Int32 get_item_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEM_ID_OFFSET))(this);
		}

		::System::Void set_item_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_ITEM_ID_OFFSET))(this, value);
		}

		::System::Int32 get_level_min()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_LEVEL_MIN_OFFSET))(this);
		}

		::System::Void set_level_min(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_LEVEL_MIN_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Model::SDkPlatformGoods_VirtualCurrency* get_virtual_currency()
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods_VirtualCurrency*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_VIRTUAL_CURRENCY_OFFSET))(this);
		}

		::System::Void set_virtual_currency(::MiHoYo::SDK::Model::SDkPlatformGoods_VirtualCurrency* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Model::SDkPlatformGoods_VirtualCurrency*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_VIRTUAL_CURRENCY_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Model::SDkPlatformGoods_Bp* get_bp()
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods_Bp*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_BP_OFFSET))(this);
		}

		::System::Void set_bp(::MiHoYo::SDK::Model::SDkPlatformGoods_Bp* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Model::SDkPlatformGoods_Bp*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_BP_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Model::SDkPlatformGoods_Vip* get_vip()
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods_Vip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_VIP_OFFSET))(this);
		}

		::System::Void set_vip(::MiHoYo::SDK::Model::SDkPlatformGoods_Vip* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Model::SDkPlatformGoods_Vip*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_VIP_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Model::SDkPlatformGoods_Consumable* get_consumable()
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods_Consumable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_CONSUMABLE_OFFSET))(this);
		}

		::System::Void set_consumable(::MiHoYo::SDK::Model::SDkPlatformGoods_Consumable* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Model::SDkPlatformGoods_Consumable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_CONSUMABLE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Model::SDkPlatformGoods_Price* get_price()
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods_Price*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_price(::MiHoYo::SDK::Model::SDkPlatformGoods_Price* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Model::SDkPlatformGoods_Price*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_SET_PRICE_OFFSET))(this, value);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEMID_OFFSET))(this);
		}

		::System::UInt32 get_ItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ITEMNUM_OFFSET))(this);
		}

		::System::UInt32 get_PresentItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRESENTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_PresentItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_PRESENTITEMNUM_OFFSET))(this);
		}

		::System::UInt32 get_FirstPresentItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_FIRSTPRESENTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_FirstPresentItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_FIRSTPRESENTITEMNUM_OFFSET))(this);
		}

		::System::Boolean get_IsFirstCharge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_ISFIRSTCHARGE_OFFSET))(this);
		}

		::System::String* get_OfficialGoodsId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_OFFICIALGOODSID_OFFSET))(this);
		}

		::System::String* get_ThirdPartyProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_THIRDPARTYPRODUCTID_OFFSET))(this);
		}

		::System::UInt32 get_MaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_MAXBUYTIMES_OFFSET))(this);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_BUYTIMES_OFFSET))(this);
		}

		::System::UInt32 get_RefreshType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_REFRESHTYPE_OFFSET))(this);
		}

		::System::Int64 get_NextRefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_GET_NEXTREFRESHTIME_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Model::SDkPlatformGoods* CreateFromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::Model::SDkPlatformGoods*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CREATEFROMJSON_OFFSET))(json);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
