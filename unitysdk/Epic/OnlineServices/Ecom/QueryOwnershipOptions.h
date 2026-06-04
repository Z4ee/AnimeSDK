#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0xA2C3040)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0xA2C3060)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C3020)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0xA2C3050)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0xA2C3070)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C3030)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C3080)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipOptions_TypeDefinitionIndex = 43020;

	class QueryOwnershipOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _CatalogItemIds_k__BackingField; // 0x10
		::System::String* _CatalogNamespace_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_CatalogItemIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGITEMIDS_OFFSET))(this);
		}

		::System::Void set_CatalogItemIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGITEMIDS_OFFSET))(this, a1);
		}

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGNAMESPACE_OFFSET))(this, a1);
		}
	};
}
