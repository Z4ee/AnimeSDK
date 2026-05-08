#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SessionInviteReceivedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3940)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3970)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3440)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3430)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnSessionInviteReceivedCallback_TypeDefinitionIndex = 33516;

	class OnSessionInviteReceivedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITERECEIVEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
