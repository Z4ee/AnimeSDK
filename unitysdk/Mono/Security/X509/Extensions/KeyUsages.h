#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int KeyUsages_TypeDefinitionIndex = 2336;

	enum class KeyUsages : ::System::Int32
	{
		digitalSignature = 128,
		nonRepudiation = 64,
		keyEncipherment = 32,
		dataEncipherment = 16,
		keyAgreement = 8,
		keyCertSign = 4,
		cRLSign = 2,
		encipherOnly = 1,
		decipherOnly = 2048,
		none = 0,
	};
}
