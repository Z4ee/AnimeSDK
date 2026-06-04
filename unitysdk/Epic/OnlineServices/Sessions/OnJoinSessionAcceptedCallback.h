#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Sessions { class JoinSessionAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA0E09B0)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA0E09E0)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA0E09A0)
#define EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E08B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int OnJoinSessionAcceptedCallback_TypeDefinitionIndex = 42086;

	class OnJoinSessionAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ONJOINSESSIONACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
