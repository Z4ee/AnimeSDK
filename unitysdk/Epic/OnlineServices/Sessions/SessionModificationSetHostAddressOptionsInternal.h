#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetHostAddressOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C3990)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C3870)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x9C36F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9C37A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetHostAddressOptionsInternal_TypeDefinitionIndex = 35792;

	struct alignas(8) SessionModificationSetHostAddressOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_HostAddress; // 0x18

		::System::Void set_HostAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_HOSTADDRESS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
