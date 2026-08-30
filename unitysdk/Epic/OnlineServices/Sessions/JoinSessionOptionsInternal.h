#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class JoinSessionOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetails; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C26120)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C260A0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C25F20)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C26090)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x3C25FE0)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_SESSIONHANDLE_OFFSET UNITYSDK_OFFSET(0x3C25E60)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x3C25DB0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int JoinSessionOptionsInternal_TypeDefinitionIndex = 45124;

	struct alignas(8) JoinSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_SessionHandle; // 0x20
		::System::IntPtr m_LocalUserId; // 0x28
		::System::Int32 m_PresenceEnabled; // 0x30

		::System::Void set_SessionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, a1);
		}

		::System::Void set_SessionHandle(::Epic::OnlineServices::Sessions::SessionDetails* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetails*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_SESSIONHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_PresenceEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::JoinSessionOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
