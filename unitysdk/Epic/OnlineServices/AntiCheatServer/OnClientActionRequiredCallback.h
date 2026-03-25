#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::AntiCheatCommon { class OnClientActionRequiredCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83937B0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83937E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8391F40)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8393790)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int OnClientActionRequiredCallback_TypeDefinitionIndex = 36612;

	class OnClientActionRequiredCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ONCLIENTACTIONREQUIREDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
