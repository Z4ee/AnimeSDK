#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioDevicesChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B66B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B66E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B66A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B65B0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioDevicesChangedCallback_TypeDefinitionIndex = 43121;

	class OnAudioDevicesChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
