#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int HashAlgorithmType_TypeDefinitionIndex = 2359;

	enum class HashAlgorithmType : ::System::Int32
	{
		Md5 = 0,
		None = 1,
		Sha1 = 2,
	};
}
