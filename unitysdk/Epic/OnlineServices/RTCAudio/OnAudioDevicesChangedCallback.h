#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioDevicesChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D16A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D16D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D1180)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D1160)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioDevicesChangedCallback_TypeDefinitionIndex = 35898;

	class OnAudioDevicesChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIODEVICESCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
