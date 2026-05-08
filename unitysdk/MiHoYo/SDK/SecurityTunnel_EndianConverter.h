#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_HOSTTONETWORK_OFFSET UNITYSDK_OFFSET(0x1A4A87B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_NETWORKTOHOST_OFFSET UNITYSDK_OFFSET(0x1A4A87C0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A87D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_EndianConverter_TypeDefinitionIndex = 35224;

	class SecurityTunnel_EndianConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void HostToNetwork(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_HOSTTONETWORK_OFFSET))(bytes);
		}

		static ::System::Void NetworkToHost(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_NETWORKTOHOST_OFFSET))(bytes);
		}
	};
}
