#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_protocol.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_protocolrange_TypeDefinitionIndex = 2356;

	struct alignas(4) UnityTls_unitytls_tlsctx_protocolrange
	{
		::Mono::Unity::UnityTls_unitytls_protocol min; // 0x10
		::Mono::Unity::UnityTls_unitytls_protocol max; // 0x14
	};
}
