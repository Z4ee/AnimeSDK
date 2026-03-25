#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace MiHoYo::SDK { class SecurityTunnel_ResponseCallbackAction; }

#define MIHOYO_SDK_SECURITYTUNNEL_DATAWRAPPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x858D420)
#define MIHOYO_SDK_SECURITYTUNNEL_DATAWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x858D410)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_DataWrapper_TypeDefinitionIndex = 37152;

	class SecurityTunnel_DataWrapper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Bytes; // 0x10
		::MiHoYo::SDK::SecurityTunnel_Packet* Packet; // 0x18
		::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* Callback; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DATAWRAPPER__CTOR_OFFSET))(this, bytes);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::SecurityTunnel_Packet* packet, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_DATAWRAPPER__CTOR_1_OFFSET))(this, packet, callback);
		}
	};
}
