#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDevicesCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C1C5A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBDF0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDevicesCountOptionsInternal_TypeDefinitionIndex = 45294;

	struct alignas(4) GetAudioInputDevicesCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICESCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
