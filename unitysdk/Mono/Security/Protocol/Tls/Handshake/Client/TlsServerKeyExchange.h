#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1BD86F60)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1BD870C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD86EE0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BD86C50)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD86C20)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsServerKeyExchange_TypeDefinitionIndex = 2415;

	class TlsServerKeyExchange : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Il2CppArray<::System::Byte>* signedParams; // 0x58
		::System::Security::Cryptography::RSAParameters rsaParams; // 0x60

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Void verifySignature()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERKEYEXCHANGE_VERIFYSIGNATURE_OFFSET))(this);
		}
	};
}
