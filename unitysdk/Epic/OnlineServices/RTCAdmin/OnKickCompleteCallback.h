#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class KickCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DFF2C20)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DFF2C50)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DFF2700)
#define EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF26E0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnKickCompleteCallback_TypeDefinitionIndex = 35942;

	class OnKickCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONKICKCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
