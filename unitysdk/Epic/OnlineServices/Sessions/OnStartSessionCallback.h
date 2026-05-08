#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class StartSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3E90)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3EC0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A4F3990)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3980)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnStartSessionCallback_TypeDefinitionIndex = 33518;

	class OnStartSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::StartSessionCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::StartSessionCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
