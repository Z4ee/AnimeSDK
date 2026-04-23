#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchFindCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BDAC70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BDACA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BD9DC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BDAC50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchOnFindCallback_TypeDefinitionIndex = 41369;

	class SessionSearchOnFindCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHONFINDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
