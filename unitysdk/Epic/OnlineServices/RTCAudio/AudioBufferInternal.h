#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class AudioBuffer; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C1B350)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0xF020)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x3C1B1D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0xF080)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C1B340)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x3AA1870)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_FRAMES_OFFSET UNITYSDK_OFFSET(0x3C1B240)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C1B2B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0xF090)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBufferInternal_TypeDefinitionIndex = 45280;

	struct alignas(8) AudioBufferInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Frames; // 0x18
		::System::UInt32 m_FramesCount; // 0x20
		::System::UInt32 m_SampleRate; // 0x24
		::System::UInt32 m_Channels; // 0x28

		::Il2CppArray<::System::Int16>* get_Frames()
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_FRAMES_OFFSET))(this);
		}

		::System::Void set_Frames(::Il2CppArray<::System::Int16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_FRAMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_SampleRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_SAMPLERATE_OFFSET))(this);
		}

		::System::Void set_SampleRate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_SAMPLERATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Channels()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_GET_CHANNELS_OFFSET))(this);
		}

		::System::Void set_Channels(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_CHANNELS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AudioBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBuffer*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFERINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
