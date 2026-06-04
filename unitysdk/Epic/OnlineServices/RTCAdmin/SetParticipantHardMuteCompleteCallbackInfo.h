#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAdmin/SetParticipantHardMuteCompleteCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA343A80)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA343A60)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA343A40)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA343D20)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA343A70)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA343AA0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA343A50)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA343E40)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int SetParticipantHardMuteCompleteCallbackInfo_TypeDefinitionIndex = 42315;

	class SetParticipantHardMuteCompleteCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
