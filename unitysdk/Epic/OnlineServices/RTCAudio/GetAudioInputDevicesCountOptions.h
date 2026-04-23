#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F26910)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDevicesCountOptions_TypeDefinitionIndex = 41447;

	class GetAudioInputDevicesCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
