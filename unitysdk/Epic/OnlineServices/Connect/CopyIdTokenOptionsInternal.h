#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class CopyIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2F990)
#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2F860)
#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x2F6D0)
#define EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2F790)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CopyIdTokenOptionsInternal_TypeDefinitionIndex = 36437;

	struct alignas(8) CopyIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::CopyIdTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::CopyIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_COPYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
