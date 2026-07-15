#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionDetailsInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsSettings; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C1873C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_NUMOPENPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1C1873E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C1873A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C187400)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C187990)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_HOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C1873D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_NUMOPENPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1C1873F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C187420)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C1873B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C187410)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C187AC0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsInfo_TypeDefinitionIndex = 42999;

	class SessionDetailsInfo : public ::System::Object
	{
	public:
		::System::String* _HostAddress_k__BackingField; // 0x10
		::System::String* _SessionId_k__BackingField; // 0x18
		::Epic::OnlineServices::Sessions::SessionDetailsSettings* _Settings_k__BackingField; // 0x20
		::System::UInt32 _NumOpenPublicConnections_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::String* get_HostAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_HOSTADDRESS_OFFSET))(this);
		}

		::System::Void set_HostAddress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_HOSTADDRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_NumOpenPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_NUMOPENPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumOpenPublicConnections(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_NUMOPENPUBLICCONNECTIONS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionDetailsSettings* get_Settings()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetailsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::Epic::OnlineServices::Sessions::SessionDetailsSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsSettings*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_SETTINGS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
