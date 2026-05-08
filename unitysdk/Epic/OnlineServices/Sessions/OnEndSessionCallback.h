#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class EndSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19A34270)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19A342A0)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19A33D70)
#define EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A33D60)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnEndSessionCallback_TypeDefinitionIndex = 33500;

	class OnEndSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::EndSessionCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::EndSessionCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONENDSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
