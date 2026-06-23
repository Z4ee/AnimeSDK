#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E5CC060)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E5CBD00)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E5CBD10)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E5CBCB0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CBC80)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsServerKeyExchange_TypeDefinitionIndex = 2403;

	class TlsServerKeyExchange : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE__CTOR_OFFSET))(this, context);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_PROCESSASTLS1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* createSignature(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERKEYEXCHANGE_CREATESIGNATURE_OFFSET))(this, rsa, buffer);
		}
	};
}
