#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5E5D0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioDevicesChangedOptions_TypeDefinitionIndex = 35862;

	class AddNotifyAudioDevicesChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
