#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class PresenceChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0054F0)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C005520)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0054E0)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0053F0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnPresenceChangedCallback_TypeDefinitionIndex = 43260;

	class OnPresenceChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
