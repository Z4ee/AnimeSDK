#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class KickCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3E4CF0)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3E4D20)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3E4CE0)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E4BF0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnKickCompleteCallback_TypeDefinitionIndex = 45347;

	class OnKickCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
