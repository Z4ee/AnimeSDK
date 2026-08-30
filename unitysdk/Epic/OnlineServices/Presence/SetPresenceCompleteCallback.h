#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class SetPresenceCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8AB70)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD8ABA0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD87930)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8AA80)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCompleteCallback_TypeDefinitionIndex = 45468;

	class SetPresenceCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::SetPresenceCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::SetPresenceCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
