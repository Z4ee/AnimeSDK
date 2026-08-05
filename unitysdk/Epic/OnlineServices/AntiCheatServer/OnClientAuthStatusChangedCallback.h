#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnClientAuthStatusChangedCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D9323F0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D932420)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D931ED0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D931EB0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int OnClientAuthStatusChangedCallback_TypeDefinitionIndex = 36881;

	class OnClientAuthStatusChangedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTAUTHSTATUSCHANGEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
