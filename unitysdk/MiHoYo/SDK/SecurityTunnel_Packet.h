#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketHeader.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::IO { class MemoryStream; }

#define MIHOYO_SDK_SECURITYTUNNEL_PACKET_GETBYTES_OFFSET UNITYSDK_OFFSET(0x8593250)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8592D60)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET_LOGINPACKET_OFFSET UNITYSDK_OFFSET(0x8592B50)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET_PINGPACKET_OFFSET UNITYSDK_OFFSET(0x85883B0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8593690)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8592DC0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8592A60)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x8592DE0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_OFFSET UNITYSDK_OFFSET(0x858A390)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_Packet_TypeDefinitionIndex = 37149;

	class SecurityTunnel_Packet : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_PacketHeader Header; // 0x10
		::Il2CppArray<::System::Byte>* Body; // 0x28
		::System::Boolean isTimeout; // 0x30
		::System::TimeSpan CustomCallbackTimeout; // 0x38

		::System::Void _ctor(::System::Boolean timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_OFFSET))(this, timeout);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::SecurityTunnel_PacketHeader header, ::Il2CppArray<::System::Byte>* body)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketHeader, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_1_OFFSET))(this, header, body);
		}

		::System::Void _ctor_2(::MiHoYo::SDK::SecurityTunnel_PacketHeader header, ::System::String* body)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketHeader, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_2_OFFSET))(this, header, body);
		}

		::System::Void _ctor_3(::System::IO::MemoryStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET__CTOR_3_OFFSET))(this, stream);
		}

		static ::MiHoYo::SDK::SecurityTunnel_Packet* PingPacket()
		{
			return ((::MiHoYo::SDK::SecurityTunnel_Packet*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET_PINGPACKET_OFFSET))();
		}

		static ::MiHoYo::SDK::SecurityTunnel_Packet* LoginPacket(::MiHoYo::SDK::SecurityTunnel_AuthInfo info)
		{
			return ((::MiHoYo::SDK::SecurityTunnel_Packet*(*)(::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET_LOGINPACKET_OFFSET))(info);
		}

		::System::UInt32 get_Length()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET_GETBYTES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKET_TOSTRING_OFFSET))(this);
		}
	};
}
