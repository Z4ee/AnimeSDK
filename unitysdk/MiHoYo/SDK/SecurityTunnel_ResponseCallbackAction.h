#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D7C0)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D840)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC5D440)
#define MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5D420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ResponseCallbackAction_TypeDefinitionIndex = 37443;

	class SecurityTunnel_ResponseCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_INVOKE_OFFSET))(this, isSuccess, packet);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isSuccess, ::MiHoYo::SDK::SecurityTunnel_Packet* packet, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_BEGININVOKE_OFFSET))(this, isSuccess, packet, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_RESPONSECALLBACKACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
