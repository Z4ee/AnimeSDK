#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class AddNotifyAudioDevicesChangedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6A8A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyAudioDevicesChangedOptionsInternal_TypeDefinitionIndex = 35596;

	struct alignas(4) AddNotifyAudioDevicesChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYAUDIODEVICESCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
