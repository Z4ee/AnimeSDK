#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class SendInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF06000)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF06030)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF05FF0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF05F00)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnSendInviteCallback_TypeDefinitionIndex = 45139;

	class OnSendInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::SendInviteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::SendInviteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
