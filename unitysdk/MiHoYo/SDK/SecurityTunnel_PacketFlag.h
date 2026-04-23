#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET UNITYSDK_OFFSET(0x299F0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DCA360)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x299E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketFlag_TypeDefinitionIndex = 42991;

	struct alignas(4) SecurityTunnel_PacketFlag
	{
		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Response()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketFlag_TypeDefinitionIndex)->GetStaticField(0xFEC0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Request()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketFlag_TypeDefinitionIndex)->GetStaticField(0xFEC4);
		}
		::System::UInt32 FlagCode; // 0x10

		::System::Void _ctor(::System::UInt32 flagCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CTOR_OFFSET))(this, flagCode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG__CCTOR_OFFSET))();
		}

		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketFlag other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET))(this, other);
		}
	};
}
