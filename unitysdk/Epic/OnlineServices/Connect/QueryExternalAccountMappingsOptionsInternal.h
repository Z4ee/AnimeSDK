#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class QueryExternalAccountMappingsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D890)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x91D820)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x577FD0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_EXTERNALACCOUNTIDS_OFFSET UNITYSDK_OFFSET(0x91D6F0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x91D630)
#define EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x91D810)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryExternalAccountMappingsOptionsInternal_TypeDefinitionIndex = 34552;

	struct alignas(8) QueryExternalAccountMappingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType; // 0x20
		::System::IntPtr m_ExternalAccountIds; // 0x28
		::System::UInt32 m_ExternalAccountIdCount; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::System::Void set_ExternalAccountIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_EXTERNALACCOUNTIDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
