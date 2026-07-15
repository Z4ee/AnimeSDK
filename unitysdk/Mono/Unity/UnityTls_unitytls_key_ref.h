#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_key_ref_TypeDefinitionIndex = 2346;

	struct alignas(8) UnityTls_unitytls_key_ref
	{
		::System::UInt64 handle; // 0x10
	};
}
