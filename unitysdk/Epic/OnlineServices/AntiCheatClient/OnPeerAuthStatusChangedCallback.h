#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnClientAuthStatusChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A9D0990)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9D09C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A9D0490)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D0480)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnPeerAuthStatusChangedCallback_TypeDefinitionIndex = 34760;

	class OnPeerAuthStatusChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERAUTHSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
