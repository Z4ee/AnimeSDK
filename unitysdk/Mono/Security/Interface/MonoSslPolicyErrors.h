#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoSslPolicyErrors_TypeDefinitionIndex = 2284;

	enum class MonoSslPolicyErrors : ::System::Int32
	{
		None = 0,
		RemoteCertificateNotAvailable = 1,
		RemoteCertificateNameMismatch = 2,
		RemoteCertificateChainErrors = 4,
	};
}
