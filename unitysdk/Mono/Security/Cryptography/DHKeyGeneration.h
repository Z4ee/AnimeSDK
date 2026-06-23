#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DHKeyGeneration_TypeDefinitionIndex = 2451;

	enum class DHKeyGeneration : ::System::Int32
	{
		Random = 0,
		Static = 1,
	};
}
