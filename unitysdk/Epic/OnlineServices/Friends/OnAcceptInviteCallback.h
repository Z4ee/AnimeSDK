#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Friends { class AcceptInviteCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C715E20)
#define EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C715E50)
#define EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C715920)
#define EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C715900)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnAcceptInviteCallback_TypeDefinitionIndex = 35892;

	class OnAcceptInviteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Friends::AcceptInviteCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::AcceptInviteCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Friends::AcceptInviteCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Friends::AcceptInviteCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONACCEPTINVITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
