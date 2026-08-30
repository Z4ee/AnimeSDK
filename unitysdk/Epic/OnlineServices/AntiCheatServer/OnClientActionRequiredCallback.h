#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnClientActionRequiredCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB13A290)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB13A2C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB139900)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB13A1A0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int OnClientActionRequiredCallback_TypeDefinitionIndex = 46284;

	class OnClientActionRequiredCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
