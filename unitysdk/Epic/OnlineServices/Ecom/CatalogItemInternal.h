#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/EcomItemType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Ecom { class CatalogItem; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B9B0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3ADE0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x3B360)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x3B780)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3B900)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x3B0A0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x3AF40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x3B8E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x3B4C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x3B620)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x3B200)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3B930)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3AE90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x3B410)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x3B830)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3B910)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x3B150)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x3AFF0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x3B8F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x3B570)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3B920)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x3B6D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x3B2B0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogItemInternal_TypeDefinitionIndex = 42938;

	struct alignas(8) CatalogItemInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_CatalogNamespace; // 0x18
		::System::IntPtr m_Id; // 0x20
		::System::IntPtr m_EntitlementName; // 0x28
		::System::IntPtr m_TitleText; // 0x30
		::System::IntPtr m_DescriptionText; // 0x38
		::System::IntPtr m_LongDescriptionText; // 0x40
		::System::IntPtr m_TechnicalDetailsText; // 0x48
		::System::IntPtr m_DeveloperText; // 0x50
		::Epic::OnlineServices::Ecom::EcomItemType m_ItemType; // 0x58
		::System::Int64 m_EntitlementEndTimestamp; // 0x60

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_CATALOGNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::System::String* get_DescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_DescriptionText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DESCRIPTIONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_LongDescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_LONGDESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_LongDescriptionText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_LONGDESCRIPTIONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_TechnicalDetailsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_TECHNICALDETAILSTEXT_OFFSET))(this);
		}

		::System::Void set_TechnicalDetailsText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_TECHNICALDETAILSTEXT_OFFSET))(this, a1);
		}

		::System::String* get_DeveloperText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_DEVELOPERTEXT_OFFSET))(this);
		}

		::System::Void set_DeveloperText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_DEVELOPERTEXT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Ecom::EcomItemType get_ItemType()
		{
			return ((::Epic::OnlineServices::Ecom::EcomItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::Epic::OnlineServices::Ecom::EcomItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::EcomItemType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ITEMTYPE_OFFSET))(this, a1);
		}

		::System::Int64 get_EntitlementEndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_GET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EntitlementEndTimestamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CatalogItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CatalogItem*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEMINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
