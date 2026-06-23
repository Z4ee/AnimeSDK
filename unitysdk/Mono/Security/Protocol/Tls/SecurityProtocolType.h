#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SecurityProtocolType_TypeDefinitionIndex = 2369;

	enum class SecurityProtocolType : ::System::Int32
	{
		Default = -1073741824,
		Ssl2 = 12,
		Ssl3 = 48,
		Tls = 192,
		Tls11 = 768,
		Tls12 = 3072,
	};
}
