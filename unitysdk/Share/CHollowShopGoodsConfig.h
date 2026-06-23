#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EDungeonContentDropPoolType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_CHOLLOWSHOPGOODSCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x18596920)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_BUYCOUNT_OFFSET UNITYSDK_OFFSET(0x18596610)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0x18596690)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x18596650)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x185965F0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x185965B0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x18596630)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_RARE_OFFSET UNITYSDK_OFFSET(0x185965D0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x18596670)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_BUYCOUNT_OFFSET UNITYSDK_OFFSET(0x18596620)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0x185966A0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x18596660)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18596600)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x185965C0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x18596640)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_RARE_OFFSET UNITYSDK_OFFSET(0x185965E0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x18596680)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185966B0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185969E0)

namespace Share
{
	inline static constexpr unsigned int CHollowShopGoodsConfig_TypeDefinitionIndex = 14278;

	class CHollowShopGoodsConfig : public ::System::Object
	{
	public:
		::System::String* m_Price; // 0x10
		::System::String* m_Weight; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* m_Rare; // 0x20
		::System::String* m_Group; // 0x28
		::System::String* m_Discount; // 0x30
		::System::String* m_ItemID; // 0x38
		::System::String* m_BuyCount; // 0x40
		::Share::EDungeonContentDropPoolType m_ItemType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG__CTOR_OFFSET))(this);
		}

		::Share::EDungeonContentDropPoolType get_ItemType()
		{
			return ((::Share::EDungeonContentDropPoolType(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::Share::EDungeonContentDropPoolType value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EDungeonContentDropPoolType))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Rare()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_RARE_OFFSET))(this);
		}

		::System::Void set_Rare(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_RARE_OFFSET))(this, value);
		}

		::System::String* get_ItemID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMID_OFFSET))(this, value);
		}

		::System::String* get_BuyCount()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_BUYCOUNT_OFFSET))(this);
		}

		::System::Void set_BuyCount(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_BUYCOUNT_OFFSET))(this, value);
		}

		::System::String* get_Price()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_PRICE_OFFSET))(this, value);
		}

		::System::String* get_Group()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_GROUP_OFFSET))(this, value);
		}

		::System::String* get_Weight()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_WEIGHT_OFFSET))(this, value);
		}

		::System::String* get_Discount()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_GET_DISCOUNT_OFFSET))(this);
		}

		::System::Void set_Discount(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_SET_DISCOUNT_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPGOODSCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
