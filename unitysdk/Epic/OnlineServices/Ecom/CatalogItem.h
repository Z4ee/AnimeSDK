#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CatalogItemInternal.h"
#include "unitysdk/Epic/OnlineServices/Ecom/EcomItemType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x8E6A0B0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A130)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A190)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8E6A1D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8E6A0F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x8E6A0D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x8E6A1B0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A150)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A170)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x8E6A110)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_1_OFFSET UNITYSDK_OFFSET(0x8E6B1D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x8E6A0C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A140)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DEVELOPERTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A1A0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8E6A1E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTNAME_OFFSET UNITYSDK_OFFSET(0x8E6A100)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x8E6A0E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x8E6A1C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_LONGDESCRIPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A160)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_OFFSET UNITYSDK_OFFSET(0x8E6A1F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TECHNICALDETAILSTEXT_OFFSET UNITYSDK_OFFSET(0x8E6A180)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x8E6A120)
#define EPIC_ONLINESERVICES_ECOM_CATALOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8E6B330)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogItem_TypeDefinitionIndex = 42134;

	class CatalogItem : public ::System::Object
	{
	public:
		::System::String* _TitleText_k__BackingField; // 0x10
		::System::String* _DeveloperText_k__BackingField; // 0x18
		::System::String* _Id_k__BackingField; // 0x20
		::System::String* _TechnicalDetailsText_k__BackingField; // 0x28
		::System::String* _LongDescriptionText_k__BackingField; // 0x30
		::System::String* _EntitlementName_k__BackingField; // 0x38
		::System::String* _CatalogNamespace_k__BackingField; // 0x40
		::System::String* _DescriptionText_k__BackingField; // 0x48
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

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_EntitlementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTNAME_OFFSET))(this);
		}

		::System::Void set_EntitlementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTNAME_OFFSET))(this, value);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TITLETEXT_OFFSET))(this, value);
		}

		::System::String* get_DescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_DescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_LongDescriptionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_LONGDESCRIPTIONTEXT_OFFSET))(this);
		}

		::System::Void set_LongDescriptionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_LONGDESCRIPTIONTEXT_OFFSET))(this, value);
		}

		::System::String* get_TechnicalDetailsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_TECHNICALDETAILSTEXT_OFFSET))(this);
		}

		::System::Void set_TechnicalDetailsText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_TECHNICALDETAILSTEXT_OFFSET))(this, value);
		}

		::System::String* get_DeveloperText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_DEVELOPERTEXT_OFFSET))(this);
		}

		::System::Void set_DeveloperText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_DEVELOPERTEXT_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Ecom::EcomItemType get_ItemType()
		{
			return ((::Epic::OnlineServices::Ecom::EcomItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::Epic::OnlineServices::Ecom::EcomItemType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::EcomItemType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ITEMTYPE_OFFSET))(this, value);
		}

		::System::Int64 get_EntitlementEndTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_GET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EntitlementEndTimestamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_ENTITLEMENTENDTIMESTAMP_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItemInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItemInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGITEM_SET_1_OFFSET))(this, other);
		}
	};
}
