#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class QueryJoinRoomTokenCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F1C460)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F1C490)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F1BF10)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1BEF0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnQueryJoinRoomTokenCompleteCallback_TypeDefinitionIndex = 41503;

	class OnQueryJoinRoomTokenCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
