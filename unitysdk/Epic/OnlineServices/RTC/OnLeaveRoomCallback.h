#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class LeaveRoomCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F16540)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F16570)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F15FF0)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8F15FD0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnLeaveRoomCallback_TypeDefinitionIndex = 41543;

	class OnLeaveRoomCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
