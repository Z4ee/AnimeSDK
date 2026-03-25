#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class LinkAccountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x32D90)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x32D20)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x32C50)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x32B90)
#define EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x32D10)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LinkAccountOptionsInternal_TypeDefinitionIndex = 36473;

	struct alignas(8) LinkAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ContinuanceToken; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::LinkAccountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LinkAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
