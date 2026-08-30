#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class LeaveRoomCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3E03B0)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3E03E0)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3E03A0)
#define EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E02B0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnLeaveRoomCallback_TypeDefinitionIndex = 45389;

	class OnLeaveRoomCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONLEAVEROOMCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
