#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E6FDB70)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E6FDEC0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1E6FDB80)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDB40)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientKeyExchange_TypeDefinitionIndex = 2408;

	class TlsClientKeyExchange : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE__CTOR_OFFSET))(this, context);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Void ProcessCommon(::System::Boolean sendLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTKEYEXCHANGE_PROCESSCOMMON_OFFSET))(this, sendLength);
		}
	};
}
