#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1F6003F0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1F600400)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F5FFC60)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FFC30)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsServerHello_TypeDefinitionIndex = 2401;

	class TlsServerHello : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Il2CppArray<::System::Byte>* random; // 0x58
		::System::Int32 unixTime; // 0x60

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO__CTOR_OFFSET))(this, context);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERHELLO_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
