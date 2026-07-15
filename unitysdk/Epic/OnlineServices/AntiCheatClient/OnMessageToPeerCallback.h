#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnMessageToClientCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C20A0C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C20A0F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C20A0B0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C209FC0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnMessageToPeerCallback_TypeDefinitionIndex = 44197;

	class OnMessageToPeerCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
