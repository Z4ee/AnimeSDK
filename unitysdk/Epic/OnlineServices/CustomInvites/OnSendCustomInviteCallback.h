#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::CustomInvites { class SendCustomInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86351E0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8635210)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x86327A0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x86351C0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int OnSendCustomInviteCallback_TypeDefinitionIndex = 36421;

	class OnSendCustomInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_ONSENDCUSTOMINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
