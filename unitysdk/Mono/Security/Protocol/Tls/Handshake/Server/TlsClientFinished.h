#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1F4C9780)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1F4C99F0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C9750)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsClientFinished_TypeDefinitionIndex = 2395;

	class TlsClientFinished : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTFINISHED_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
