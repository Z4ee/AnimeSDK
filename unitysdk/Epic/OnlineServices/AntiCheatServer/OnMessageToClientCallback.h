#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnMessageToClientCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BBBF10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BBBF40)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BBA9E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBBEF0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int OnMessageToClientCallback_TypeDefinitionIndex = 42442;

	class OnMessageToClientCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONMESSAGETOCLIENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
