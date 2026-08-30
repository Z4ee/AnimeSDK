#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class UpdateSendingCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C8C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C8F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE4C8B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C7C0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnUpdateSendingCallback_TypeDefinitionIndex = 45313;

	class OnUpdateSendingCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
