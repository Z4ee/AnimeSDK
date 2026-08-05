#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1FAD9D10)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1FADA0A0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAD9C70)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD9C40)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientHello_TypeDefinitionIndex = 2407;

	class TlsClientHello : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Il2CppArray<::System::Byte>* random; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO__CTOR_OFFSET))(this, context);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTHELLO_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
