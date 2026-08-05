#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class LogoutCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C9BFE50)
#define EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C9BFE80)
#define EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C9BF930)
#define EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BF910)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnLogoutCallback_TypeDefinitionIndex = 36836;

	class OnLogoutCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LogoutCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::LogoutCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONLOGOUTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
