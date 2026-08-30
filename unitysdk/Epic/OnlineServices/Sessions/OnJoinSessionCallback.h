#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class JoinSessionCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB1478A0)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB1478D0)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB147890)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB1477A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnJoinSessionCallback_TypeDefinitionIndex = 45131;

	class OnJoinSessionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
