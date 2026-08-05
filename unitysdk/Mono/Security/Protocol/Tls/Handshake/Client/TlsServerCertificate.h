#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/AlertDescription.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class ClientContext; }
namespace Mono::Security::Protocol::Tls { class Context; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET UNITYSDK_OFFSET(0x1E6FE170)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E6FF130)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1E6FECF0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_LOCALVALIDATION_OFFSET UNITYSDK_OFFSET(0x1E6FE7C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_MATCH_OFFSET UNITYSDK_OFFSET(0x1E6FEF40)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E6FDF40)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E6FDF50)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_REMOTEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1E6FE6F0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6FDF00)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_VALIDATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E6FE0C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDED0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsServerCertificate_TypeDefinitionIndex = 2409;

	class TlsServerCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Mono::Security::X509::X509CertificateCollection* certificates; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Boolean checkCertificateUsage(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET))(this, cert);
		}

		::System::Void validateCertificates(::Mono::Security::X509::X509CertificateCollection* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_VALIDATECERTIFICATES_OFFSET))(this, certificates);
		}

		::System::Void RemoteValidation(::Mono::Security::Protocol::Tls::ClientContext* context, ::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::ClientContext*, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_REMOTEVALIDATION_OFFSET))(this, context, description);
		}

		::System::Void LocalValidation(::Mono::Security::Protocol::Tls::ClientContext* context, ::Mono::Security::Protocol::Tls::AlertDescription description)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::ClientContext*, ::Mono::Security::Protocol::Tls::AlertDescription))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_LOCALVALIDATION_OFFSET))(this, context, description);
		}

		::System::Boolean checkServerIdentity(::Mono::Security::X509::X509Certificate* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKSERVERIDENTITY_OFFSET))(this, cert);
		}

		::System::Boolean checkDomainName(::System::String* subjectName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_CHECKDOMAINNAME_OFFSET))(this, subjectName);
		}

		static ::System::Boolean Match(::System::String* hostname, ::System::String* pattern)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATE_MATCH_OFFSET))(hostname, pattern);
		}
	};
}
