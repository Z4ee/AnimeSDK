#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioBeforeSendCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA34BAC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA34BAF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA34BAB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA34B9C0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioBeforeSendCallback_TypeDefinitionIndex = 42258;

	class OnAudioBeforeSendCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORESENDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
