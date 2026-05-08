#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class SessionDetails; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1942AB60)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1942AB80)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_SESSIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1942AB40)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1942AB20)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1942AB70)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1942AB90)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_SESSIONHANDLE_OFFSET UNITYSDK_OFFSET(0x1942AB50)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1942AB30)
#define EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1942ABA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int JoinSessionOptions_TypeDefinitionIndex = 33496;

	class JoinSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::SessionDetails* _SessionHandle_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _SessionName_k__BackingField; // 0x20
		::System::Boolean _PresenceEnabled_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::SessionDetails* get_SessionHandle()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetails*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_SESSIONHANDLE_OFFSET))(this);
		}

		::System::Void set_SessionHandle(::Epic::OnlineServices::Sessions::SessionDetails* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetails*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_SESSIONHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_PresenceEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_GET_PRESENCEENABLED_OFFSET))(this);
		}

		::System::Void set_PresenceEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_JOINSESSIONOPTIONS_SET_PRESENCEENABLED_OFFSET))(this, value);
		}
	};
}
