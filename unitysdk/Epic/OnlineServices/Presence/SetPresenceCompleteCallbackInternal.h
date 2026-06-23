#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD9750)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD97A0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBD9460)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD9440)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCompleteCallbackInternal_TypeDefinitionIndex = 35405;

	class SetPresenceCompleteCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECOMPLETECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
