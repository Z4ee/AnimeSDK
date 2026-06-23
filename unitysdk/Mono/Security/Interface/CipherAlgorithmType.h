#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int CipherAlgorithmType_TypeDefinitionIndex = 2431;

	enum class CipherAlgorithmType : ::System::Int32
	{
		None = 0,
		Aes128 = 1,
		Aes256 = 2,
		AesGcm128 = 3,
		AesGcm256 = 4,
	};
}
