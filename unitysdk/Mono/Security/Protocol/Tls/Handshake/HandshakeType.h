#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls::Handshake
{
	inline static constexpr unsigned int HandshakeType_TypeDefinitionIndex = 2392;

	enum class HandshakeType : ::System::Byte
	{
		HelloRequest = 0x0,
		ClientHello = 0x1,
		ServerHello = 0x2,
		Certificate = 0xB,
		ServerKeyExchange = 0xC,
		CertificateRequest = 0xD,
		ServerHelloDone = 0xE,
		CertificateVerify = 0xF,
		ClientKeyExchange = 0x10,
		Finished = 0x14,
		None = 0xFF,
	};
}
