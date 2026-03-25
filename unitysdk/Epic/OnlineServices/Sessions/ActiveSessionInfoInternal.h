#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionState.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionInfo; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x71650)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x713C0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0x714F0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x71260)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x715E0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x71430)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x715D0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0x71560)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x71310)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionInfoInternal_TypeDefinitionIndex = 35408;

	struct alignas(8) ActiveSessionInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::Epic::OnlineServices::Sessions::OnlineSessionState m_State; // 0x28
		::System::IntPtr m_SessionDetails; // 0x30

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionState get_State()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Epic::OnlineServices::Sessions::OnlineSessionState value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_STATE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::SessionDetailsInfo* get_SessionDetails()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetailsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_GET_SESSIONDETAILS_OFFSET))(this);
		}

		::System::Void set_SessionDetails(::Epic::OnlineServices::Sessions::SessionDetailsInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_SESSIONDETAILS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::ActiveSessionInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
