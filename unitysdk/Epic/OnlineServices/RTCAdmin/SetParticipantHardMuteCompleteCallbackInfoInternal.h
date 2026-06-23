#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9C1D20)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int SetParticipantHardMuteCompleteCallbackInfoInternal_TypeDefinitionIndex = 35295;

	struct alignas(8) SetParticipantHardMuteCompleteCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTECOMPLETECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}
	};
}
