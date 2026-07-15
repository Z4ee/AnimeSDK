#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsProtocols_TypeDefinitionIndex = 2291;

	enum class TlsProtocols : ::System::Int32
	{
		Zero = 0,
		Tls10Client = 128,
		Tls10Server = 64,
		Tls10 = 192,
		Tls11Client = 512,
		Tls11Server = 256,
		Tls11 = 768,
		Tls12Client = 2048,
		Tls12Server = 1024,
		Tls12 = 3072,
		ClientMask = 2688,
		ServerMask = 1344,
	};
}
