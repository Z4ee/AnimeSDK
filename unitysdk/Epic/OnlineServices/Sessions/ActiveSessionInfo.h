#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/ActiveSessionInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsInfo; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3FB570)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0xB3FB5B0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0xB3FB550)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB3FB590)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB3FBAB0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3FB580)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3FB5D0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONDETAILS_OFFSET UNITYSDK_OFFSET(0xB3FB5C0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0xB3FB560)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB3FB5A0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3FBBE0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSessionInfo_TypeDefinitionIndex = 45079;

	class ActiveSessionInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _SessionName_k__BackingField; // 0x18
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

		::System::Void set_SessionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionState get_State()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Epic::OnlineServices::Sessions::OnlineSessionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_STATE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::SessionDetailsInfo* get_SessionDetails()
		{
			return ((::Epic::OnlineServices::Sessions::SessionDetailsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_GET_SESSIONDETAILS_OFFSET))(this);
		}

		::System::Void set_SessionDetails(::Epic::OnlineServices::Sessions::SessionDetailsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_SESSIONDETAILS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSIONINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
