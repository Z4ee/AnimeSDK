#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class GetExternalAccountMappingsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E4210)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9E41A0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9E4020)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9E4190)
#define EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_TARGETEXTERNALUSERID_OFFSET UNITYSDK_OFFSET(0x9E40E0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetExternalAccountMappingsOptionsInternal_TypeDefinitionIndex = 36071;

	struct alignas(8) GetExternalAccountMappingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType; // 0x20
		::System::IntPtr m_TargetExternalUserId; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::System::Void set_TargetExternalUserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_TARGETEXTERNALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETEXTERNALACCOUNTMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
