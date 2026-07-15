#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Unity { class UnityTls_unitytls_tlsctx_read_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_write_callback; }

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_callbacks_TypeDefinitionIndex = 2362;

	struct alignas(8) UnityTls_unitytls_tlsctx_callbacks
	{
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* read; // 0x10
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* write; // 0x18
		::System::Void* data; // 0x20
	};
}
