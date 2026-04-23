#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioBufferInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x8F23240)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x8F23200)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0x8F23220)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_1_OFFSET UNITYSDK_OFFSET(0x8F23470)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x8F23250)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_FRAMES_OFFSET UNITYSDK_OFFSET(0x8F23210)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x8F23260)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_SAMPLERATE_OFFSET UNITYSDK_OFFSET(0x8F23230)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F235A0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioBuffer_TypeDefinitionIndex = 41433;

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

		::System::Void set_Frames(::Il2CppArray<::System::Int16>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_FRAMES_OFFSET))(this, value);
		}

		::System::UInt32 get_SampleRate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_SAMPLERATE_OFFSET))(this);
		}

		::System::Void set_SampleRate(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_SAMPLERATE_OFFSET))(this, value);
		}

		::System::UInt32 get_Channels()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_GET_CHANNELS_OFFSET))(this);
		}

		::System::Void set_Channels(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_CHANNELS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBufferInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBufferInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOBUFFER_SET_1_OFFSET))(this, other);
		}
	};
}
