#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsInfo; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsSettings; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C27E30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x3C27B60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_NUMOPENPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0xF020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x3C27A00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x3C27CC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C27DB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x3C27C10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_NUMOPENPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x3AA1870)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C27DA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x3C27AB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x3C27D30)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsInfoInternal_TypeDefinitionIndex = 45182;

	struct alignas(8) SessionDetailsInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionId; // 0x18
		::System::IntPtr m_HostAddress; // 0x20
		::System::UInt32 m_NumOpenPublicConnections; // 0x28
		::System::IntPtr m_Settings; // 0x30

		::System::String* get_SessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::String* get_HostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_HOSTADDRESS_OFFSET))(this);
		}

		::System::Void set_HostAddress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_HOSTADDRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_NumOpenPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_NUMOPENPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumOpenPublicConnections(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_NUMOPENPUBLICCONNECTIONS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionDetailsSettings* get_Settings()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetailsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::Epic::OnlineServices::Sessions::SessionDetailsSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsSettings*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_SETTINGS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
