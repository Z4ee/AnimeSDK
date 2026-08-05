#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CheckoutEntry; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1E1A4730)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E1A46F0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E1A4710)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1E1A4740)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1E1A4700)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E1A4720)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4750)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutOptions_TypeDefinitionIndex = 36585;

	class CheckoutOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _OverrideCatalogNamespace_k__BackingField; // 0x18
		::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* _Entries_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_OverrideCatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* get_Entries()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_GET_ENTRIES_OFFSET))(this);
		}

		::System::Void set_Entries(::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONS_SET_ENTRIES_OFFSET))(this, value);
		}
	};
}
