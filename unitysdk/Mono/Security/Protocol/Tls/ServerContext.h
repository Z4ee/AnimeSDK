#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Context.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"

namespace Mono::Security::Protocol::Tls { class SslServerStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_CLIENTCERTIFICATEREQUIRED_OFFSET UNITYSDK_OFFSET(0x1E7C2450)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_REQUESTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E7C2460)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1E7C2440)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C2470)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ServerContext_TypeDefinitionIndex = 2370;

	class ServerContext : public ::Mono::Security::Protocol::Tls::Context
	{
	public:
		::Mono::Security::Protocol::Tls::SslServerStream* sslStream; // 0xD8
		::System::Boolean request_client_certificate; // 0xE0
		::System::Boolean clientCertificateRequired; // 0xE1

		::System::Void _ctor(::Mono::Security::Protocol::Tls::SslServerStream* stream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean requestClientCertificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslServerStream*, ::Mono::Security::Protocol::Tls::SecurityProtocolType, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT__CTOR_OFFSET))(this, stream, securityProtocolType, serverCertificate, clientCertificateRequired, requestClientCertificate);
		}

		::Mono::Security::Protocol::Tls::SslServerStream* get_SslStream()
		{
			return ((::Mono::Security::Protocol::Tls::SslServerStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_SSLSTREAM_OFFSET))(this);
		}

		::System::Boolean get_ClientCertificateRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_CLIENTCERTIFICATEREQUIRED_OFFSET))(this);
		}

		::System::Boolean get_RequestClientCertificate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERCONTEXT_GET_REQUESTCLIENTCERTIFICATE_OFFSET))(this);
		}
	};
}
