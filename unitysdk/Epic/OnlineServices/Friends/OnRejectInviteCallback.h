#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class RejectInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE6F490)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE6F4C0)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE6EF90)
#define EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6EF70)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnRejectInviteCallback_TypeDefinitionIndex = 35900;

	class OnRejectInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::RejectInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::RejectInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::RejectInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::RejectInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONREJECTINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
