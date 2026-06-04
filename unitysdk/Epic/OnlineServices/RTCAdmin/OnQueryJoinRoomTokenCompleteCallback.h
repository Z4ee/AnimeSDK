#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::RTCAdmin { class QueryJoinRoomTokenCompleteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3418D0)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA341900)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3418C0)
#define EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA3417D0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int OnQueryJoinRoomTokenCompleteCallback_TypeDefinitionIndex = 42306;

	class OnQueryJoinRoomTokenCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_ONQUERYJOINROOMTOKENCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
