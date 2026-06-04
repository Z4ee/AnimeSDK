#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class JoinGameAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA32F560)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA32F590)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA32F550)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA32F460)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnJoinGameAcceptedCallback_TypeDefinitionIndex = 42397;

	class OnJoinGameAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
