#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0xFDB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x161E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x3C1C6F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C1C800)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x3C1C920)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x3C1C870)
#define EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_SPEAKING_OFFSET UNITYSDK_OFFSET(0x3C1C990)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int ParticipantUpdatedCallbackInfoInternal_TypeDefinitionIndex = 45316;

	struct alignas(8) ParticipantUpdatedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ParticipantId; // 0x28
		::System::Int32 m_Speaking; // 0x30
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus m_AudioStatus; // 0x34

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Boolean get_Speaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_SPEAKING_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_PARTICIPANTUPDATEDCALLBACKINFOINTERNAL_GET_AUDIOSTATUS_OFFSET))(this);
		}
	};
}
