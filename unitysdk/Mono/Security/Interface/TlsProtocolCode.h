#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsProtocolCode_TypeDefinitionIndex = 2445;

	enum class TlsProtocolCode : ::System::Int16
	{
		Tls10 = 769,
		Tls11 = 770,
		Tls12 = 771,
	};
}
