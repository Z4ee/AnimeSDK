#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86ED650)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioDevicesChangedOptions_TypeDefinitionIndex = 35595;

	class AddNotifyAudioDevicesChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
