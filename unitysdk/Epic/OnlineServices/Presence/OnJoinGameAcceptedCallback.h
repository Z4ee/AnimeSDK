#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::Presence { class JoinGameAcceptedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE77D50)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE77D80)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE77850)
#define EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE77830)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int OnJoinGameAcceptedCallback_TypeDefinitionIndex = 35376;

	class OnJoinGameAcceptedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ONJOINGAMEACCEPTEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
