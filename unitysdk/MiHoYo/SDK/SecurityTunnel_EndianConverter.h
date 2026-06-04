#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_HOSTTONETWORK_OFFSET UNITYSDK_OFFSET(0xA20DDE0)
#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_NETWORKTOHOST_OFFSET UNITYSDK_OFFSET(0xA213100)
#define MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA213110)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_EndianConverter_TypeDefinitionIndex = 43813;

	class SecurityTunnel_EndianConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void HostToNetwork(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_HOSTTONETWORK_OFFSET))(a1);
		}

		static ::System::Void NetworkToHost(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ENDIANCONVERTER_NETWORKTOHOST_OFFSET))(a1);
		}
	};
}
