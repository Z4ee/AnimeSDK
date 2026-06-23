#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnMessageToClientCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B602F40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B602F70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B602A40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B602A20)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnMessageToPeerCallback_TypeDefinitionIndex = 36315;

	class OnMessageToPeerCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOPEERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
