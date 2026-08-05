#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class RejectInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D3340)
#define EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D3370)
#define EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9D2E20)
#define EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D2E00)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnRejectInviteCallback_TypeDefinitionIndex = 35732;

	class OnRejectInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::RejectInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RejectInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::RejectInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::RejectInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
