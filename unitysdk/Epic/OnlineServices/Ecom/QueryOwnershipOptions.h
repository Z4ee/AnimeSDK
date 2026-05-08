#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x1941BF70)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1941BF90)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1941BF50)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x1941BF80)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1941BFA0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1941BF60)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1941BFB0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipOptions_TypeDefinitionIndex = 34436;

	class QueryOwnershipOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _CatalogNamespace_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* _CatalogItemIds_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_CatalogItemIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGITEMIDS_OFFSET))(this);
		}

		::System::Void set_CatalogItemIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGITEMIDS_OFFSET))(this, value);
		}

		::System::String* get_CatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_GET_CATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPOPTIONS_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}
	};
}
