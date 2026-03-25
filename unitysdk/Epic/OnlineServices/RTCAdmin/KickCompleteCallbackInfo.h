#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAdmin/KickCompleteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x86E7460)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86E7440)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86E7420)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x86E7700)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x86E7450)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x86E7480)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x86E7430)
#define EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x86E7810)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int KickCompleteCallbackInfo_TypeDefinitionIndex = 35671;

	class KickCompleteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_KICKCOMPLETECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
