#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SendInviteCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0E3BB0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0E3B90)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0E3B70)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0E3E50)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0E3BA0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0E3BD0)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0E3B80)
#define EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E3F70)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SendInviteCallbackInfo_TypeDefinitionIndex = 42122;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SendInviteCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SendInviteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SENDINVITECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
