#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA34B700)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioOutputDevicesCountOptions_TypeDefinitionIndex = 42254;

	class GetAudioOutputDevicesCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
