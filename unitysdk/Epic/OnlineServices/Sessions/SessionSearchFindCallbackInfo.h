#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionSearchFindCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0EC200)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0EC1E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0EC1C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0EC4A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0EC1F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0EC220)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0EC1D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EC5C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchFindCallbackInfo_TypeDefinitionIndex = 42166;

	class SessionSearchFindCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
