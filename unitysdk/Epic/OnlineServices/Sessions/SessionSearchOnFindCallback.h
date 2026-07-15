#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchFindCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C18E210)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C18E240)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C18D7C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18E120)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchOnFindCallback_TypeDefinitionIndex = 43033;

	class SessionSearchOnFindCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
