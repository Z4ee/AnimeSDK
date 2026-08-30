#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetHostAddressOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C292F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C292E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x3C29160)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C29210)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetHostAddressOptionsInternal_TypeDefinitionIndex = 45197;

	struct alignas(8) SessionModificationSetHostAddressOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_HostAddress; // 0x18

		::System::Void set_HostAddress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_HOSTADDRESS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETHOSTADDRESSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
