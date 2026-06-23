#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class GetProductUserIdMappingOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DF350)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9DF2E0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9DF150)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9DF2D0)
#define EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_TARGETPRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x9DF210)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int GetProductUserIdMappingOptionsInternal_TypeDefinitionIndex = 36075;

	struct alignas(8) GetProductUserIdMappingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType; // 0x20
		::System::IntPtr m_TargetProductUserId; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		::System::Void set_TargetProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_TARGETPRODUCTUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_GETPRODUCTUSERIDMAPPINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
