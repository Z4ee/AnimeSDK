#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/SetPresenceCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D7AB0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86D7A70)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D7A90)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D7A50)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86D7EB0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86D7A80)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86D7AA0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86D7AD0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86D7A60)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86D7FC0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCallbackInfo_TypeDefinitionIndex = 35794;

	class SetPresenceCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
