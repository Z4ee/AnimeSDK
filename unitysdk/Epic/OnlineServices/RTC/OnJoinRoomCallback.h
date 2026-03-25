#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTC { class JoinRoomCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86E23B0)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86E23E0)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86E1E60)
#define EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86E1E40)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int OnJoinRoomCallback_TypeDefinitionIndex = 35715;

	class OnJoinRoomCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTC::JoinRoomCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTC::JoinRoomCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ONJOINROOMCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
