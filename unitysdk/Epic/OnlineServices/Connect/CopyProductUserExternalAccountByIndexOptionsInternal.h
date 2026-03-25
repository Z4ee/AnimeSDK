#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class CopyProductUserExternalAccountByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x30170)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x30160)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_EXTERNALACCOUNTINFOINDEX_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x30080)
#define EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x2FFC0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyProductUserExternalAccountByIndexOptionsInternal_TypeDefinitionIndex = 36443;

	struct alignas(8) CopyProductUserExternalAccountByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18
		::System::UInt32 m_ExternalAccountInfoIndex; // 0x20

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void set_ExternalAccountInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_EXTERNALACCOUNTINFOINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
