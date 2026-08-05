#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1F8E6990)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1F8E69A0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E6960)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsServerHelloDone_TypeDefinitionIndex = 2402;

	class TlsServerHelloDone : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE__CTOR_OFFSET))(this, context);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLODONE_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
