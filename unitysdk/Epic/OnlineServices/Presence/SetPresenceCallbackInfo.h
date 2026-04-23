#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/SetPresenceCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F0B320)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F0B2E0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F0B300)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F0B2C0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F0B720)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F0B2F0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F0B310)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F0B340)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F0B2D0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0B830)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCallbackInfo_TypeDefinitionIndex = 41620;

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
