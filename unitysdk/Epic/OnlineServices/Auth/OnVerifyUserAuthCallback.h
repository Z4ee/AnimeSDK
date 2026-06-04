#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class VerifyUserAuthCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA280370)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA2803A0)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA280360)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA280270)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnVerifyUserAuthCallback_TypeDefinitionIndex = 43204;

	class OnVerifyUserAuthCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYUSERAUTHCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
