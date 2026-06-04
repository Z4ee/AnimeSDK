#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::CustomInvites { class SendCustomInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA2AC390)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2AC3C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2AA0F0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AC2A0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int OnSendCustomInviteCallback_TypeDefinitionIndex = 43050;

	class OnSendCustomInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
