#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x6EDF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x6EB50)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6EC60)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x6ED80)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6ECD0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateReceivingCallbackInfoInternal_TypeDefinitionIndex = 35660;

	struct alignas(8) UpdateReceivingCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_RoomName; // 0x28
		::System::IntPtr m_ParticipantId; // 0x30
		::System::Int32 m_AudioEnabled; // 0x38

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Boolean get_AudioEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGCALLBACKINFOINTERNAL_GET_AUDIOENABLED_OFFSET))(this);
		}
	};
}
