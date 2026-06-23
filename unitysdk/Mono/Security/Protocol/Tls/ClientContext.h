#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Context.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"

namespace Mono::Security::Protocol::Tls { class SslClientStream; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E1E2570)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_GET_CLIENTHELLOPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E1E2500)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1E1E24F0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_SET_CLIENTHELLOPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E1E2510)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E2520)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ClientContext_TypeDefinitionIndex = 2350;

	class ClientContext : public ::Mono::Security::Protocol::Tls::Context
	{
	public:
		::Mono::Security::Protocol::Tls::SslClientStream* sslStream; // 0xD8
		::System::Int16 clientHelloProtocol; // 0xE0

		::System::Void _ctor(::Mono::Security::Protocol::Tls::SslClientStream* stream, ::Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocolType, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslClientStream*, ::Mono::Security::Protocol::Tls::SecurityProtocolType, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT__CTOR_OFFSET))(this, stream, securityProtocolType, targetHost, clientCertificates);
		}

		::Mono::Security::Protocol::Tls::SslClientStream* get_SslStream()
		{
			return ((::Mono::Security::Protocol::Tls::SslClientStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_GET_SSLSTREAM_OFFSET))(this);
		}

		::System::Int16 get_ClientHelloProtocol()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_GET_CLIENTHELLOPROTOCOL_OFFSET))(this);
		}

		::System::Void set_ClientHelloProtocol(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_SET_CLIENTHELLOPROTOCOL_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTCONTEXT_CLEAR_OFFSET))(this);
		}
	};
}
