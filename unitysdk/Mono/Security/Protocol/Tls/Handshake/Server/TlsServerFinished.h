#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E361FD0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E362180)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E362310)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E361FA0)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsServerFinished_TypeDefinitionIndex = 2400;

	class TlsServerFinished : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Ssl3Marker()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(TlsServerFinished_TypeDefinitionIndex)->GetStaticField(0x2560);
		}

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED__CTOR_OFFSET))(this, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED__CCTOR_OFFSET))();
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSSERVERFINISHED_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
