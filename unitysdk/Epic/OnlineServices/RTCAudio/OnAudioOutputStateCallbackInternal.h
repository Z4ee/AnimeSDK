#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6BB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6C00)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6BA0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B6B30)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnAudioOutputStateCallbackInternal_TypeDefinitionIndex = 43126;

	class OnAudioOutputStateCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONAUDIOOUTPUTSTATECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
