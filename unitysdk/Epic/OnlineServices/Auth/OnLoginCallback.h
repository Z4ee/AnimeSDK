#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class LoginCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBDC30)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBDC60)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBDC20)
#define EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBDB30)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnLoginCallback_TypeDefinitionIndex = 44055;

	class OnLoginCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::LoginCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LoginCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGINCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
