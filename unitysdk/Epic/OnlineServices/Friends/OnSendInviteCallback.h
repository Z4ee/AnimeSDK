#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class SendInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D68CEA0)
#define EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D68CED0)
#define EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D68B140)
#define EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68CDB0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnSendInviteCallback_TypeDefinitionIndex = 45966;

	class OnSendInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::SendInviteCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::SendInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::SendInviteCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::SendInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONSENDINVITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
