#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class QueryProductUserIdMappingsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9730)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F96C0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9F9580)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F96B0)
#define EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_PRODUCTUSERIDS_OFFSET UNITYSDK_OFFSET(0x9F9640)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int QueryProductUserIdMappingsOptionsInternal_TypeDefinitionIndex = 36778;

	struct alignas(8) QueryProductUserIdMappingsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType_DEPRECATED; // 0x20
		::System::IntPtr m_ProductUserIds; // 0x28
		::System::UInt32 m_ProductUserIdCount; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_AccountIdType_DEPRECATED(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_DEPRECATED_OFFSET))(this, value);
		}

		::System::Void set_ProductUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_PRODUCTUSERIDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_QUERYPRODUCTUSERIDMAPPINGSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
