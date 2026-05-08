#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class SetPresenceCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD89D80)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD89DB0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD89880)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD89870)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCompleteCallback_TypeDefinitionIndex = 33841;

	class SetPresenceCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::SetPresenceCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::SetPresenceCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
