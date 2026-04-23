#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8DC90D0)
#define MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8DC9100)
#define MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x8DB6060)
#define MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC90B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnDisconnectedAction_TypeDefinitionIndex = 43002;

	class SecurityTunnel_OnDisconnectedAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONDISCONNECTEDACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
