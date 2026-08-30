#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_NEXTID_OFFSET UNITYSDK_OFFSET(0xB2ACF60)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2AD0A0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AD080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketIDGenerator_TypeDefinitionIndex = 46868;

	class SecurityTunnel_PacketIDGenerator : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_AutomaticNextID()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketIDGenerator_TypeDefinitionIndex)->GetStaticField(0x12D40);
		}
		::System::Object* locker; // 0x10
		::System::UInt64 current; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR__CCTOR_OFFSET))();
		}

		::System::UInt64 NextID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETIDGENERATOR_NEXTID_OFFSET))(this);
		}
	};
}
