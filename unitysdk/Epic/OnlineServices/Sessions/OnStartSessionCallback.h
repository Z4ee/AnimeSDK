#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class StartSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB148780)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB1487B0)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB148770)
#define EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB148680)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnStartSessionCallback_TypeDefinitionIndex = 45145;

	class OnStartSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::StartSessionCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::StartSessionCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONSTARTSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
