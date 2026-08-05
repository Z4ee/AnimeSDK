#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDevicesCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C1D60)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioOutputDevicesCountOptionsInternal_TypeDefinitionIndex = 35893;

	struct alignas(4) GetAudioOutputDevicesCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICESCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
