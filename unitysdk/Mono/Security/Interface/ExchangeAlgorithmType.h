#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ExchangeAlgorithmType_TypeDefinitionIndex = 2433;

	enum class ExchangeAlgorithmType : ::System::Int32
	{
		None = 0,
		Dhe = 1,
		Rsa = 2,
		EcDhe = 3,
	};
}
