#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityCompressionType.h"

namespace Mono::Security::Protocol::Tls { class CipherSuite; }
namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E7F8F90)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E7F8FA0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E7F9290)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E7F8D70)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8D40)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsServerHello_TypeDefinitionIndex = 2412;

	class TlsServerHello : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Mono::Security::Protocol::Tls::CipherSuite* cipherSuite; // 0x58
		::Il2CppArray<::System::Byte>* sessionId; // 0x60
		::Il2CppArray<::System::Byte>* random; // 0x68
		::Mono::Security::Protocol::Tls::SecurityCompressionType compressionMethod; // 0x70

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Void processProtocol(::System::Int16 protocol)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERHELLO_PROCESSPROTOCOL_OFFSET))(this, protocol);
		}
	};
}
