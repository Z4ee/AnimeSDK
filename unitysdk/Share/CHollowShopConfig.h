#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EHollowShopCurrency.h"
#include "unitysdk/Share/EHollowShopShowType.h"
#include "unitysdk/Share/EHollowShopType.h"
#include "unitysdk/System/Object.h"

namespace Share { class CEventPredicateConfig; }
namespace Share { class CHollowShopGoodsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_CHOLLOWSHOPCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1934FC00)
#define SHARE_CHOLLOWSHOPCONFIG_GET_PREDICATES_OFFSET UNITYSDK_OFFSET(0x1934F910)
#define SHARE_CHOLLOWSHOPCONFIG_GET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1934F890)
#define SHARE_CHOLLOWSHOPCONFIG_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1934F8D0)
#define SHARE_CHOLLOWSHOPCONFIG_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1934F8F0)
#define SHARE_CHOLLOWSHOPCONFIG_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1934F8B0)
#define SHARE_CHOLLOWSHOPCONFIG_SET_PREDICATES_OFFSET UNITYSDK_OFFSET(0x1934F920)
#define SHARE_CHOLLOWSHOPCONFIG_SET_SHOPTYPE_OFFSET UNITYSDK_OFFSET(0x1934F8A0)
#define SHARE_CHOLLOWSHOPCONFIG_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1934F8E0)
#define SHARE_CHOLLOWSHOPCONFIG_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x1934F900)
#define SHARE_CHOLLOWSHOPCONFIG_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1934F8C0)
#define SHARE_CHOLLOWSHOPCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1934F930)
#define SHARE_CHOLLOWSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1934FC80)

namespace Share
{
	inline static constexpr unsigned int CHollowShopConfig_TypeDefinitionIndex = 16369;

	class CHollowShopConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Share::CEventPredicateConfig*>* m_Predicates; // 0x10
		::System::Collections::Generic::List_1<::Share::CHollowShopGoodsConfig*>* m_Slot; // 0x18
		::Share::EHollowShopType m_ShopType; // 0x20
		::Share::EHollowShopShowType m_ShowType; // 0x22
		::Share::EHollowShopCurrency m_TokenType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG__CTOR_OFFSET))(this);
		}

		::Share::EHollowShopType get_ShopType()
		{
			return ((::Share::EHollowShopType(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_GET_SHOPTYPE_OFFSET))(this);
		}

		::System::Void set_ShopType(::Share::EHollowShopType value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EHollowShopType))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_SET_SHOPTYPE_OFFSET))(this, value);
		}

		::Share::EHollowShopCurrency get_TokenType()
		{
			return ((::Share::EHollowShopCurrency(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::Share::EHollowShopCurrency value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EHollowShopCurrency))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::Share::EHollowShopShowType get_ShowType()
		{
			return ((::Share::EHollowShopShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_GET_SHOWTYPE_OFFSET))(this);
		}

		::System::Void set_ShowType(::Share::EHollowShopShowType value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EHollowShopShowType))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_SET_SHOWTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Share::CHollowShopGoodsConfig*>* get_Slot()
		{
			return ((::System::Collections::Generic::List_1<::Share::CHollowShopGoodsConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::Collections::Generic::List_1<::Share::CHollowShopGoodsConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Share::CHollowShopGoodsConfig*>*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_SET_SLOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Share::CEventPredicateConfig*>* get_Predicates()
		{
			return ((::System::Collections::Generic::List_1<::Share::CEventPredicateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_GET_PREDICATES_OFFSET))(this);
		}

		::System::Void set_Predicates(::System::Collections::Generic::List_1<::Share::CEventPredicateConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Share::CEventPredicateConfig*>*))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_SET_PREDICATES_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CHOLLOWSHOPCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
