#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/UpdateSessionCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C5478D0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C547870)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C547850)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C5478B0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1C547890)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C547C00)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C547880)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C5478F0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C547860)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C5478C0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x1C5478A0)
#define EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C547D40)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int UpdateSessionCallbackInfo_TypeDefinitionIndex = 35172;

	class UpdateSessionCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _SessionName_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::String* _SessionId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::String* get_SessionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_SESSIONNAME_OFFSET))(this);
		}

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::String* get_SessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_SESSIONID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_UPDATESESSIONCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
