#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509ChainStatusFlags_TypeDefinitionIndex = 2301;

	enum class X509ChainStatusFlags : ::System::Int32
	{
		InvalidBasicConstraints = 1024,
		NoError = 0,
		NotSignatureValid = 8,
		NotTimeNested = 2,
		NotTimeValid = 1,
		PartialChain = 65536,
		UntrustedRoot = 32,
	};
}
