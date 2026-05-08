#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_GETCLIENTCERTRSA_OFFSET UNITYSDK_OFFSET(0x1C3B40E0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C3B4660)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1C3B3D60)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1C3B42E0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3B3CF0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B3CC0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientCertificateVerify_TypeDefinitionIndex = 2406;

	class TlsClientCertificateVerify : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY__CTOR_OFFSET))(this, context);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Security::Cryptography::RSA* getClientCertRSA(::System::Security::Cryptography::RSA* privKey)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_GETCLIENTCERTRSA_OFFSET))(this, privKey);
		}

		::Il2CppArray<::System::Byte>* getUnsignedBigInteger(::Il2CppArray<::System::Byte>* integer)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATEVERIFY_GETUNSIGNEDBIGINTEGER_OFFSET))(this, integer);
		}
	};
}
