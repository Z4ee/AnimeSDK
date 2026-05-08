#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class JoinSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE34230)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE34260)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE33D30)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE33D20)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnJoinSessionCallback_TypeDefinitionIndex = 33504;

	class OnJoinSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
