#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF13210)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF13240)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF12F70)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF12F50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnServerKickOffCallbackAction_TypeDefinitionIndex = 36785;

	class SecurityTunnel_OnServerKickOffCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSERVERKICKOFFCALLBACKACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
