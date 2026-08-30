#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class JoinRoomCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92D10)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92D40)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD92D00)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD92C10)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnJoinRoomCallback_TypeDefinitionIndex = 45387;

	class OnJoinRoomCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::JoinRoomCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::JoinRoomCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
