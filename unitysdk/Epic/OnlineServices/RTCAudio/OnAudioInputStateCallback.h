#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class AudioInputStateCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C040)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C070)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C030)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4BF40)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioInputStateCallback_TypeDefinitionIndex = 45305;

	class OnAudioInputStateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOINPUTSTATECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
