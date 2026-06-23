#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CatalogOfferInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_AVAILABLEFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x1B7ACEE0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B7ACD20)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x1B7ACDE0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENTPRICE64_OFFSET UNITYSDK_OFFSET(0x1B7ACF20)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENTPRICE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACE40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DECIMALPOINT_OFFSET UNITYSDK_OFFSET(0x1B7ACF40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACD80)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DISCOUNTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1B7ACE60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_EXPIRATIONTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B7ACE80)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B7ACD40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACDA0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ORIGINALPRICE64_OFFSET UNITYSDK_OFFSET(0x1B7ACF00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ORIGINALPRICE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACE20)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PRICERESULT_OFFSET UNITYSDK_OFFSET(0x1B7ACE00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PURCHASEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7ACEA0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0x1B7ACEC0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x1B7ACD00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_TECHNICALDETAILSTEXT_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACDC0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACD60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_1_OFFSET UNITYSDK_OFFSET(0x1B7AE210)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_AVAILABLEFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x1B7ACEF0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B7ACD30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x1B7ACDF0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENTPRICE64_OFFSET UNITYSDK_OFFSET(0x1B7ACF30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENTPRICE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACE50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DECIMALPOINT_OFFSET UNITYSDK_OFFSET(0x1B7ACF50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACD90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DISCOUNTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1B7ACE70)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_EXPIRATIONTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B7ACE90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B7ACD50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACDB0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_OFFSET UNITYSDK_OFFSET(0x1B7ACF60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ORIGINALPRICE64_OFFSET UNITYSDK_OFFSET(0x1B7ACF10)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ORIGINALPRICE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACE30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PRICERESULT_OFFSET UNITYSDK_OFFSET(0x1B7ACE10)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PURCHASEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7ACEB0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0x1B7ACED0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_SERVERINDEX_OFFSET UNITYSDK_OFFSET(0x1B7ACD10)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_TECHNICALDETAILSTEXT_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B7ACDD0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B7ACD70)
#define EPIC_ONLINESERVICES_ECOM_CATALOGOFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AE340)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogOffer_TypeDefinitionIndex = 35918;

	class CatalogOffer : public ::System::Object
	{
	public:
		::System::String* _CurrencyCode_k__BackingField; // 0x10
		::System::String* _CatalogNamespace_k__BackingField; // 0x18
		::System::String* _LongDescriptionText_k__BackingField; // 0x20
		::System::String* _Id_k__BackingField; // 0x28
		::System::String* _TechnicalDetailsText_DEPRECATED_k__BackingField; // 0x30
		::System::String* _DescriptionText_k__BackingField; // 0x38
		::System::String* _TitleText_k__BackingField; // 0x40
		::System::UInt64 _OriginalPrice64_k__BackingField; // 0x48
		::System::UInt32 _DecimalPoint_k__BackingField; // 0x50
		::Epic::OnlineServices::Result _PriceResult_k__BackingField; // 0x54
		::System::UInt32 _OriginalPrice_DEPRECATED_k__BackingField; // 0x58
		::System::Boolean _AvailableForPurchase_k__BackingField; // 0x5C
		::System::Byte _DiscountPercentage_k__BackingField; // 0x5D
		::System::UInt32 _CurrentPrice_DEPRECATED_k__BackingField; // 0x60
		::System::Int32 _PurchaseLimit_k__BackingField; // 0x64
		::System::UInt64 _CurrentPrice64_k__BackingField; // 0x68
		::System::Int64 _ExpirationTimestamp_k__BackingField; // 0x70
		::System::UInt32 _PurchasedCount_k__BackingField; // 0x78
		::System::Int32 _ServerIndex_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ServerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_SERVERINDEX_OFFSET))(this);
		}

		::System::Void set_ServerIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_SERVERINDEX_OFFSET))(this, value);
		}

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_TITLETEXT_OFFSET))(this, value);
		}

		::System::String* get_DescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_DescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_LongDescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_LONGDESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_LongDescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_LONGDESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_TechnicalDetailsText_DEPRECATED()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_TECHNICALDETAILSTEXT_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_TechnicalDetailsText_DEPRECATED(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_TECHNICALDETAILSTEXT_DEPRECATED_OFFSET))(this, value);
		}

		::System::String* get_CurrencyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENCYCODE_OFFSET))(this);
		}

		::System::Void set_CurrencyCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENCYCODE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Result get_PriceResult()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PRICERESULT_OFFSET))(this);
		}

		::System::Void set_PriceResult(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PRICERESULT_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginalPrice_DEPRECATED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ORIGINALPRICE_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_OriginalPrice_DEPRECATED(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ORIGINALPRICE_DEPRECATED_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentPrice_DEPRECATED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENTPRICE_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_CurrentPrice_DEPRECATED(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENTPRICE_DEPRECATED_OFFSET))(this, value);
		}

		::System::Byte get_DiscountPercentage()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DISCOUNTPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_DiscountPercentage(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DISCOUNTPERCENTAGE_OFFSET))(this, value);
		}

		::System::Int64 get_ExpirationTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_EXPIRATIONTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ExpirationTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_EXPIRATIONTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_PurchasedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PURCHASEDCOUNT_OFFSET))(this);
		}

		::System::Void set_PurchasedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PURCHASEDCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_PurchaseLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_PURCHASELIMIT_OFFSET))(this);
		}

		::System::Void set_PurchaseLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_PURCHASELIMIT_OFFSET))(this, value);
		}

		::System::Boolean get_AvailableForPurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_AVAILABLEFORPURCHASE_OFFSET))(this);
		}

		::System::Void set_AvailableForPurchase(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_AVAILABLEFORPURCHASE_OFFSET))(this, value);
		}

		::System::UInt64 get_OriginalPrice64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_ORIGINALPRICE64_OFFSET))(this);
		}

		::System::Void set_OriginalPrice64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_ORIGINALPRICE64_OFFSET))(this, value);
		}

		::System::UInt64 get_CurrentPrice64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_CURRENTPRICE64_OFFSET))(this);
		}

		::System::Void set_CurrentPrice64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_CURRENTPRICE64_OFFSET))(this, value);
		}

		::System::UInt32 get_DecimalPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_GET_DECIMALPOINT_OFFSET))(this);
		}

		::System::Void set_DecimalPoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_DECIMALPOINT_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOfferInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOfferInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGOFFER_SET_1_OFFSET))(this, other);
		}
	};
}
