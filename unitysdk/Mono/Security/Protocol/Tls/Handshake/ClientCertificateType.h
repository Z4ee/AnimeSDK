#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls::Handshake
{
	inline static constexpr unsigned int ClientCertificateType_TypeDefinitionIndex = 2390;

	enum class ClientCertificateType : ::System::Int32
	{
		RSA = 1,
		DSS = 2,
		RSAFixed = 3,
		DSSFixed = 4,
		Unknown = 255,
	};
}
