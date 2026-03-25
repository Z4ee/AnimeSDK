#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Auth { class QueryIdTokenCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x85FBC90)
#define EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x85FBCC0)
#define EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x85FB740)
#define EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x85FB720)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int OnQueryIdTokenCallback_TypeDefinitionIndex = 36571;

	class OnQueryIdTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ONQUERYIDTOKENCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
