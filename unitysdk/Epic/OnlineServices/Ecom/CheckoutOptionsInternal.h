#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class CheckoutEntry; }
namespace Epic::OnlineServices::Ecom { class CheckoutOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3D680)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3D600)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x3D4D0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3D360)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3D5F0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3D420)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutOptionsInternal_TypeDefinitionIndex = 42948;

	struct alignas(8) CheckoutOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_OverrideCatalogNamespace; // 0x20
		::System::UInt32 m_EntryCount; // 0x28
		::System::IntPtr m_Entries; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, a1);
		}

		::System::Void set_Entries(::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Ecom::CheckoutEntry*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_ENTRIES_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::CheckoutOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
