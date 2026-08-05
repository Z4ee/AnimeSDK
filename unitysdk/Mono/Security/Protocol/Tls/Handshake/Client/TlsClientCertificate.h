#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_FINDPARENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1FB9E9C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GETCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1FB9E610)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1FB9E5E0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1FB9ECC0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1FB9ED00)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_SENDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FB9E880)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FB9E810)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB9E5B0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientCertificate_TypeDefinitionIndex = 2404;

	class TlsClientCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate* clientCert; // 0x58
		::System::Boolean clientCertSelected; // 0x60

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE__CTOR_OFFSET))(this, context);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GET_CLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_UPDATE_OFFSET))(this);
		}

		::System::Void GetClientCertificate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GETCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Void SendCertificates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_SENDCERTIFICATES_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* FindParentCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_FINDPARENTCERTIFICATE_OFFSET))(this, cert);
		}
	};
}
