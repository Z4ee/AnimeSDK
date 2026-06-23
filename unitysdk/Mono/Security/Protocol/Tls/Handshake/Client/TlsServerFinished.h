#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1E4D75C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1E4D7800)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4D7590)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D7A30)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D7560)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsServerFinished_TypeDefinitionIndex = 2411;

	class TlsServerFinished : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Ssl3Marker()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(TlsServerFinished_TypeDefinitionIndex)->GetStaticField(0x22E0);
		}

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED__CTOR_OFFSET))(this, context, buffer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERFINISHED_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
