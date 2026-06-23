#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E706500)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E706510)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7064D0)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsServerCertificate_TypeDefinitionIndex = 2398;

	class TlsServerCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE__CTOR_OFFSET))(this, context);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERCERTIFICATE_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
