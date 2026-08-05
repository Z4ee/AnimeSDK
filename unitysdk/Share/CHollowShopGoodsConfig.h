#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EDungeonContentDropPoolType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_CHOLLOWSHOPGOODSCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F8F4A20)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_BUYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8F4710)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8F4790)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1F8F4750)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1F8F46F0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1F8F46B0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1F8F4730)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_RARE_OFFSET UNITYSDK_OFFSET(0x1F8F46D0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1F8F4770)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_BUYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8F4720)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8F47A0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1F8F4760)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1F8F4700)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1F8F46C0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x1F8F4740)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_RARE_OFFSET UNITYSDK_OFFSET(0x1F8F46E0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1F8F4780)
#define SHARE_CHOLLOWSHOPGOODSCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8F47B0)
#define SHARE_CHOLLOWSHOPGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F4AE0)

namespace Share
{
	inline static constexpr unsigned int CHollowShopGoodsConfig_TypeDefinitionIndex = 17074;

	class CHollowShopGoodsConfig : public ::System::Object
	{
	public:
		::System::String* m_Discount; // 0x10
		::System::String* m_Price; // 0x18
		::System::String* m_Weight; // 0x20
		::System::String* m_Group; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* m_Rare; // 0x30
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
