#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E531F30)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E531F60)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E531A10)
#define MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5319F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnReceivePacketAction_TypeDefinitionIndex = 37442;

	class SecurityTunnel_OnReceivePacketAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::SecurityTunnel_Packet* packet)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_INVOKE_OFFSET))(this, packet);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::SecurityTunnel_Packet* packet, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_BEGININVOKE_OFFSET))(this, packet, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONRECEIVEPACKETACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
