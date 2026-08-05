#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS_GET_DEVICEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x1DCB07E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS_SET_DEVICEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x1DCB07F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB0800)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDeviceByIndexOptions_TypeDefinitionIndex = 35886;

	class GetAudioInputDeviceByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _DeviceInfoIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DeviceInfoIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS_GET_DEVICEINFOINDEX_OFFSET))(this);
		}

		::System::Void set_DeviceInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONS_SET_DEVICEINFOINDEX_OFFSET))(this, value);
		}
	};
}
