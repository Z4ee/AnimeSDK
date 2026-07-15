#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_protocol_TypeDefinitionIndex = 2355;

	enum class UnityTls_unitytls_protocol : ::System::UInt32
	{
		UNITYTLS_PROTOCOL_TLS_1_0 = 0x0,
		UNITYTLS_PROTOCOL_TLS_1_1 = 0x1,
		UNITYTLS_PROTOCOL_TLS_1_2 = 0x2,
		UNITYTLS_PROTOCOL_INVALID = 0x3,
	};
}
