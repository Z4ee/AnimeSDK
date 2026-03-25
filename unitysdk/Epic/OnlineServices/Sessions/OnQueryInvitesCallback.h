#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class QueryInvitesCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83A3190)
#define EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83A31C0)
#define EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x83A2C40)
#define EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x83A2C20)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnQueryInvitesCallback_TypeDefinitionIndex = 35461;

	class OnQueryInvitesCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONQUERYINVITESCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
