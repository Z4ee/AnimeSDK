#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class DestroySessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BC8D20)
#define EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BC8D50)
#define EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BC87D0)
#define EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC87B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnDestroySessionCallback_TypeDefinitionIndex = 41279;

	class OnDestroySessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONDESTROYSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
