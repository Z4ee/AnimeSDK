#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioBeforeRenderCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A493F70)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A493FA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A493A70)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A493A60)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioBeforeRenderCallback_TypeDefinitionIndex = 33672;

	class OnAudioBeforeRenderCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOBEFORERENDERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
