#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class QueryOwnershipTokenOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x43000)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x42F80)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x42E50)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x42EC0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x42D90)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x42F70)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipTokenOptionsInternal_TypeDefinitionIndex = 43025;

	struct alignas(8) QueryOwnershipTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_CatalogItemIds; // 0x20
		::System::UInt32 m_CatalogItemIdCount; // 0x28
		::System::IntPtr m_CatalogNamespace; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_CatalogItemIds(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGITEMIDS_OFFSET))(this, a1);
		}

		::System::Void set_CatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGNAMESPACE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
