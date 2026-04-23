#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnClientActionRequiredCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BA9AE0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BA9B10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BA9590)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA9570)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnPeerActionRequiredCallback_TypeDefinitionIndex = 42539;

	class OnPeerActionRequiredCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONPEERACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
