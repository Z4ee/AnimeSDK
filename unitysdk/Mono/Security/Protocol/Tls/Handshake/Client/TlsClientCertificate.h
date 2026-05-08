#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_FINDPARENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C4837D0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GETCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C483420)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C4833F0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1C483AD0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1C483B10)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_SENDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C483680)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C483610)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4833C0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientCertificate_TypeDefinitionIndex = 2405;

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
