#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class VerifyIdTokenCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBE4B0)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBE4E0)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBBE4A0)
#define EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBE3B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnVerifyIdTokenCallback_TypeDefinitionIndex = 44063;

	class OnVerifyIdTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONVERIFYIDTOKENCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
