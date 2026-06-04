#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x2C990)
#define MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2CA10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ServerAddress_TypeDefinitionIndex = 43799;

	struct alignas(8) SecurityTunnel_ServerAddress
	{
		::System::String* Host; // 0x10
		::System::Int32 Port; // 0x18

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_GETHASHCODE_OFFSET))(this);
		}
	};
}
