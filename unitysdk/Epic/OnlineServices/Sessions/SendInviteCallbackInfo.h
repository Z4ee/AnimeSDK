#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SendInviteCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C2BF1C0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C2BF1A0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C2BF180)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2BF270)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C2BF1B0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C2BF1E0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C2BF190)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BF3D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SendInviteCallbackInfo_TypeDefinitionIndex = 35760;

	class SendInviteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SendInviteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SendInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
