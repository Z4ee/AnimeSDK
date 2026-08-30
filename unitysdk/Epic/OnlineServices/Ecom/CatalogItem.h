#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CatalogItemInternal.h"
#include "unitysdk/Epic/OnlineServices/Ecom/EcomItemType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DF2AE40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AEC0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AF20)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1DF2AF60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1DF2AE80)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DF2AE60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1DF2AF40)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AEE0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AF00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AEA0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF2BF60)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DF2AE50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AED0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AF30)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1DF2AF70)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1DF2AE90)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DF2AE70)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1DF2AF50)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AEF0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_OFFSET UNITYSDK_OFFSET(0x1DF2AF80)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AF10)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1DF2AEB0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C0C0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogItem_TypeDefinitionIndex = 45980;

	class CatalogItem : public ::System::Object
	{
	public:
		::System::String* _DescriptionText_k__BackingField; // 0x10
		::System::String* _TitleText_k__BackingField; // 0x18
		::System::String* _Id_k__BackingField; // 0x20
		::System::String* _TechnicalDetailsText_k__BackingField; // 0x28
		::System::String* _LongDescriptionText_k__BackingField; // 0x30
		::System::String* _CatalogNamespace_k__BackingField; // 0x38
		::System::String* _DeveloperText_k__BackingField; // 0x40
		::System::String* _EntitlementName_k__BackingField; // 0x48
		::System::Int64 _EntitlementEndTimestamp_k__BackingField; // 0x50
		::Epic::OnlineServices::Ecom::EcomItemType _ItemType_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_CATALOGNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTNAME_OFFSET))(this, a1);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::System::String* get_DescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_DescriptionText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DESCRIPTIONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_LongDescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_LONGDESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_LongDescriptionText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_LONGDESCRIPTIONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_TechnicalDetailsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TECHNICALDETAILSTEXT_OFFSET))(this);
		}

		::System::Void set_TechnicalDetailsText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TECHNICALDETAILSTEXT_OFFSET))(this, a1);
		}

		::System::String* get_DeveloperText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DEVELOPERTEXT_OFFSET))(this);
		}

		::System::Void set_DeveloperText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DEVELOPERTEXT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Ecom::EcomItemType get_ItemType()
		{
			return ((::Epic::OnlineServices::Ecom::EcomItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::Epic::OnlineServices::Ecom::EcomItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::EcomItemType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ITEMTYPE_OFFSET))(this, a1);
		}

		::System::Int64 get_EntitlementEndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EntitlementEndTimestamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItemInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItemInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_1_OFFSET))(this, a1);
		}
	};
}
