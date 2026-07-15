#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_error_code.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_errorstate_TypeDefinitionIndex = 2344;

	struct alignas(8) UnityTls_unitytls_errorstate
	{
		::System::UInt32 magic; // 0x10
		::Mono::Unity::UnityTls_unitytls_error_code code; // 0x14
		::System::UInt64 reserved; // 0x18
	};
}
