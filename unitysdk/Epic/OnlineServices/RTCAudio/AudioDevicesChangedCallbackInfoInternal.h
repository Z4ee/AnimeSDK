#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x246290)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9C1E30)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioDevicesChangedCallbackInfoInternal_TypeDefinitionIndex = 35218;

	struct alignas(8) AudioDevicesChangedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIODEVICESCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}
	};
}
