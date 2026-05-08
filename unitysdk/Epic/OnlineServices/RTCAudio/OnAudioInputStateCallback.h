#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioInputStateCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A494A10)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A494A40)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A494510)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A494500)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioInputStateCallback_TypeDefinitionIndex = 33678;

	class OnAudioInputStateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
