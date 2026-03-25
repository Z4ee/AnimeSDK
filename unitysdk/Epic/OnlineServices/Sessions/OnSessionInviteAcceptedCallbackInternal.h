#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83A5960)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83A59B0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x83A5670)
#define EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x83A5650)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnSessionInviteAcceptedCallbackInternal_TypeDefinitionIndex = 35470;

	class OnSessionInviteAcceptedCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSESSIONINVITEACCEPTEDCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
