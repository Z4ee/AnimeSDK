#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SendInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE797E0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE79810)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE792E0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE792C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnSendInviteCallback_TypeDefinitionIndex = 35075;

	class OnSendInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SendInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SendInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
