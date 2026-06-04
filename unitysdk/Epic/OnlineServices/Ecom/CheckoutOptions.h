#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CheckoutEntry; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xA2B4170)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B4130)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0xA2B4150)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xA2B4180)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2B4140)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0xA2B4160)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B4190)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutOptions_TypeDefinitionIndex = 42947;

	class CheckoutOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* _Entries_k__BackingField; // 0x10
		::System::String* _OverrideCatalogNamespace_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_OverrideCatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* get_Entries()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_ENTRIES_OFFSET))(this);
		}

		::System::Void set_Entries(::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_ENTRIES_OFFSET))(this, a1);
		}
	};
}
