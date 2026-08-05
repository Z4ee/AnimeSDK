#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class PresenceChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5D7C80)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5D7CB0)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5D7760)
#define EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7740)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnPresenceChangedCallback_TypeDefinitionIndex = 36037;

	class OnPresenceChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONPRESENCECHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
