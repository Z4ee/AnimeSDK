#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class DeletePersistentAuthCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA27F490)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA27F4C0)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA27F480)
#define EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA27F390)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnDeletePersistentAuthCallback_TypeDefinitionIndex = 43190;

	class OnDeletePersistentAuthCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONDELETEPERSISTENTAUTHCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
