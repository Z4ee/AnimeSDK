#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioBufferInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x1C0B2820)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1C0B27E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1C0B2800)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_1_OFFSET UNITYSDK_OFFSET(0x1C0B2A50)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x1C0B2830)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1C0B27F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x1C0B2840)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1C0B2810)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B2B80)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBuffer_TypeDefinitionIndex = 43097;

	class AudioBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int16>* _Frames_k__BackingField; // 0x10
		::System::UInt32 _Channels_k__BackingField; // 0x18
		::System::UInt32 _SampleRate_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Int16>* get_Frames()
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_FRAMES_OFFSET))(this);
		}

		::System::Void set_Frames(::Il2CppArray<::System::Int16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_FRAMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_SampleRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_SAMPLERATE_OFFSET))(this);
		}

		::System::Void set_SampleRate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_SAMPLERATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Channels()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_CHANNELS_OFFSET))(this);
		}

		::System::Void set_Channels(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_CHANNELS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBufferInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_1_OFFSET))(this, a1);
		}
	};
}
