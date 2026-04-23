#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x29CE0)
#define MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x29D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ServerAddress_TypeDefinitionIndex = 42996;

	struct alignas(8) SecurityTunnel_ServerAddress
	{
		::System::String* Host; // 0x10
		::System::Int32 Port; // 0x18

		::System::Boolean Equals(::System::Object* ob)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_EQUALS_OFFSET))(this, ob);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SERVERADDRESS_GETHASHCODE_OFFSET))(this);
		}
	};
}
