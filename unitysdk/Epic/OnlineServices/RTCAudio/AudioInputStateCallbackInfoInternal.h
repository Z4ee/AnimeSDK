#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioInputStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5580)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x6C130)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6C240)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6C2B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x5E00)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioInputStateCallbackInfoInternal_TypeDefinitionIndex = 35614;

	struct alignas(8) AudioInputStateCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus m_Status; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_ROOMNAME_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus get_Status()
		{
			return ((::Epic::OnlineServices::RTCAudio::RTCAudioInputStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTSTATECALLBACKINFOINTERNAL_GET_STATUS_OFFSET))(this);
		}
	};
}
