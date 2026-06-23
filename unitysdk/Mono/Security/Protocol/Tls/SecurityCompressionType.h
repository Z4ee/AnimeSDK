#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SecurityCompressionType_TypeDefinitionIndex = 2367;

	enum class SecurityCompressionType : ::System::Int32
	{
		None = 0,
		Zlib = 1,
	};
}
