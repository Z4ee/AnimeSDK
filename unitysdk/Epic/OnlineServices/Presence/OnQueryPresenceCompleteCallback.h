#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class QueryPresenceCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA32F9A0)
#define EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA32F9D0)
#define EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA32F990)
#define EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA32F8A0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnQueryPresenceCompleteCallback_TypeDefinitionIndex = 42401;

	class OnQueryPresenceCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::QueryPresenceCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::QueryPresenceCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::QueryPresenceCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::QueryPresenceCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONQUERYPRESENCECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
