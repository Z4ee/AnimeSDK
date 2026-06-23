#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoEncryptionPolicy_TypeDefinitionIndex = 2438;

	enum class MonoEncryptionPolicy : ::System::Int32
	{
		RequireEncryption = 0,
		AllowNoEncryption = 1,
		NoEncryption = 2,
	};
}
