#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ExchangeAlgorithmType_TypeDefinitionIndex = 2357;

	enum class ExchangeAlgorithmType : ::System::Int32
	{
		DiffieHellman = 0,
		Fortezza = 1,
		None = 2,
		RsaKeyX = 3,
		RsaSign = 4,
	};
}
