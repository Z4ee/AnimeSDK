#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CipherAlgorithmType_TypeDefinitionIndex = 2346;

	enum class CipherAlgorithmType : ::System::Int32
	{
		Des = 0,
		None = 1,
		Rc2 = 2,
		Rc4 = 3,
		Rijndael = 4,
		SkipJack = 5,
		TripleDes = 6,
	};
}
