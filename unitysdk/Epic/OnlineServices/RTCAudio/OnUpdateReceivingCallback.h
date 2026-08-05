#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class UpdateReceivingCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D277470)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2774A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D276F50)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D276F30)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnUpdateReceivingCallback_TypeDefinitionIndex = 35906;

	class OnUpdateReceivingCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
