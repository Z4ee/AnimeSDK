#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1D3660A0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1D3664B0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D366070)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsClientKeyExchange_TypeDefinitionIndex = 2397;

	class TlsClientKeyExchange : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTKEYEXCHANGE_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
