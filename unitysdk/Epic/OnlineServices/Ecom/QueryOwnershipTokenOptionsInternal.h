#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Ecom { class QueryOwnershipTokenOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3F180)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3F110)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGITEMIDS_OFFSET UNITYSDK_OFFSET(0x3EFE0)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x3F050)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3EF20)
#define EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3F100)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOwnershipTokenOptionsInternal_TypeDefinitionIndex = 42222;

	struct alignas(8) QueryOwnershipTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_CatalogItemIds; // 0x20
		::System::UInt32 m_CatalogItemIdCount; // 0x28
		::System::IntPtr m_CatalogNamespace; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_CatalogItemIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGITEMIDS_OFFSET))(this, value);
		}

		::System::Void set_CatalogNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_CATALOGNAMESPACE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOWNERSHIPTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
