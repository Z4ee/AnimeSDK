#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class LoginCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8E23B50)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8E23B80)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8E23600)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E235E0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnLoginCallback_TypeDefinitionIndex = 42391;

	class OnLoginCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::LoginCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LoginCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
