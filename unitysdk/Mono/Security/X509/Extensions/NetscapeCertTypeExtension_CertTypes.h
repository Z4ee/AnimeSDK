#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int NetscapeCertTypeExtension_CertTypes_TypeDefinitionIndex = 2339;

	enum class NetscapeCertTypeExtension_CertTypes : ::System::Int32
	{
		SslClient = 128,
		SslServer = 64,
		Smime = 32,
		ObjectSigning = 16,
		SslCA = 4,
		SmimeCA = 2,
		ObjectSigningCA = 1,
	};
}
