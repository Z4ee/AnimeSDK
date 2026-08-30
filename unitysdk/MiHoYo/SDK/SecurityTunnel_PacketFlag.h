#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET UNITYSDK_OFFSET(0x860DE0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD35A10)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketFlag_TypeDefinitionIndex = 46842;

	struct alignas(4) SecurityTunnel_PacketFlag
	{
		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Response()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketFlag_TypeDefinitionIndex)->GetStaticField(0x12B50);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Request()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketFlag_TypeDefinitionIndex)->GetStaticField(0x12B54);
		}
		::System::UInt32 FlagCode; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CCTOR_OFFSET))();
		}

		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET))(this, a1);
		}
	};
}
