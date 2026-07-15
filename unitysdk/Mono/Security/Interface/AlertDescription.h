#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int AlertDescription_TypeDefinitionIndex = 2275;

	enum class AlertDescription : ::System::Byte
	{
		CloseNotify = 0x0,
		UnexpectedMessage = 0xA,
		BadRecordMAC = 0x14,
		DecryptionFailed_RESERVED = 0x15,
		RecordOverflow = 0x16,
		DecompressionFailure = 0x1E,
		HandshakeFailure = 0x28,
		NoCertificate_RESERVED = 0x29,
		BadCertificate = 0x2A,
		UnsupportedCertificate = 0x2B,
		CertificateRevoked = 0x2C,
		CertificateExpired = 0x2D,
		CertificateUnknown = 0x2E,
		IlegalParameter = 0x2F,
		UnknownCA = 0x30,
		AccessDenied = 0x31,
		DecodeError = 0x32,
		DecryptError = 0x33,
		ExportRestriction = 0x3C,
		ProtocolVersion = 0x46,
		InsuficientSecurity = 0x47,
		InternalError = 0x50,
		UserCancelled = 0x5A,
		NoRenegotiation = 0x64,
		UnsupportedExtension = 0x6E,
	};
}
