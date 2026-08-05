#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CheckoutEntry; }
namespace Epic::OnlineServices::Ecom { class CheckoutOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA22530)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA224C0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xA22390)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA22220)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA224B0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0xA222E0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutOptionsInternal_TypeDefinitionIndex = 36586;

	struct alignas(8) CheckoutOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OverrideCatalogNamespace; // 0x20
		::System::UInt32 m_EntryCount; // 0x28
		::System::IntPtr m_Entries; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::Void set_Entries(::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_ENTRIES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CheckoutOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
