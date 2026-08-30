#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB360)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB390)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB350)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AB260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnReceivePacketAction_TypeDefinitionIndex = 46854;

	class SecurityTunnel_OnReceivePacketAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::SecurityTunnel_Packet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::SecurityTunnel_Packet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
