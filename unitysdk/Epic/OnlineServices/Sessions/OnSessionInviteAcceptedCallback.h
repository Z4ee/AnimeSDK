#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SessionInviteAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83A5610)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83A5640)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83A50C0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83A50A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnSessionInviteAcceptedCallback_TypeDefinitionIndex = 35469;

	class OnSessionInviteAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
