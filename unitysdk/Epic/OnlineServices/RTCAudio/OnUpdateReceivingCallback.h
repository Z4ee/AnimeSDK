#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAudio { class UpdateReceivingCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6F30)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6F60)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B6F20)
#define EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B6E30)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int OnUpdateReceivingCallback_TypeDefinitionIndex = 43129;

	class OnUpdateReceivingCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ONUPDATERECEIVINGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
