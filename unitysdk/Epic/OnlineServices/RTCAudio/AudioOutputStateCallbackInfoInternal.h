#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioOutputStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x161E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x3C1C300)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C1C410)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x3C1C480)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xF020)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioOutputStateCallbackInfoInternal_TypeDefinitionIndex = 45290;

	struct alignas(8) AudioOutputStateCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus m_Status; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus get_Status()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTSTATECALLBACKINFOINTERNAL_GET_STATUS_OFFSET))(this);
		}
	};
}
