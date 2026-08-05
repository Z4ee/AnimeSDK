#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0xA26BF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA269C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA26AD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA26C60)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA26B40)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBeforeRenderCallbackInfoInternal_TypeDefinitionIndex = 35871;

	struct alignas(8) AudioBeforeRenderCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_Buffer; // 0x28
		::System::IntPtr m_ParticipantId; // 0x30

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAudio::AudioBuffer* get_Buffer()
		{
			return ((::Epic::OnlineServices::RTCAudio::AudioBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_BUFFER_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBEFORERENDERCALLBACKINFOINTERNAL_GET_PARTICIPANTID_OFFSET))(this);
		}
	};
}
