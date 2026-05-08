#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B77C050)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_GET_HASCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1B77B5A0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1B77B5E0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1B77B5F0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B77B370)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_VALIDATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1B77B810)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77B340)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsClientCertificate_TypeDefinitionIndex = 2394;

	class TlsClientCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Mono::Security::X509::X509CertificateCollection* clientCertificates; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_HasCertificate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_GET_HASCERTIFICATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Boolean checkCertificateUsage(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET))(this, cert);
		}

		::System::Void validateCertificates(::Mono::Security::X509::X509CertificateCollection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_VALIDATECERTIFICATES_OFFSET))(this, certificates);
		}
	};
}
