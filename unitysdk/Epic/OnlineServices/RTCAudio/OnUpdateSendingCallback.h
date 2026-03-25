#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class UpdateSendingCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86F7800)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86F7830)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86F72B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86F7290)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnUpdateSendingCallback_TypeDefinitionIndex = 35641;

	class OnUpdateSendingCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATESENDINGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
