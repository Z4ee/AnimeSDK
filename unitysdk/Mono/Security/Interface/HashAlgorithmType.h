#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int HashAlgorithmType_TypeDefinitionIndex = 2434;

	enum class HashAlgorithmType : ::System::Int32
	{
		None = 0,
		Md5 = 1,
		Sha1 = 2,
		Sha224 = 3,
		Sha256 = 4,
		Sha384 = 5,
		Sha512 = 6,
		Unknown = 255,
		Md5Sha1 = 254,
	};
}
