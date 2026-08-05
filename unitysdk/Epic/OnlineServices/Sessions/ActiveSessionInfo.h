#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/ActiveSessionInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsInfo; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF7D6F0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0x1DF7D730)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1DF7D6D0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1DF7D710)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF7DAA0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF7D700)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF7D750)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0x1DF7D740)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1DF7D6E0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1DF7D720)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7DBE0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionInfo_TypeDefinitionIndex = 35674;

	class ActiveSessionInfo : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Sessions::SessionDetailsInfo* _SessionDetails_k__BackingField; // 0x20
		::Epic::OnlineServices::Sessions::OnlineSessionState _State_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionState get_State()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Epic::OnlineServices::Sessions::OnlineSessionState value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_STATE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::SessionDetailsInfo* get_SessionDetails()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetailsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONDETAILS_OFFSET))(this);
		}

		::System::Void set_SessionDetails(::Epic::OnlineServices::Sessions::SessionDetailsInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONDETAILS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_1_OFFSET))(this, other);
		}
	};
}
