#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1FAE3610)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1FAE37C0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAE3420)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE38D0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE33C0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsClientFinished_TypeDefinitionIndex = 2406;

	class TlsClientFinished : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Ssl3Marker()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(TlsClientFinished_TypeDefinitionIndex)->GetStaticField(0x2380);
		}

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED__CTOR_OFFSET))(this, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSCLIENTFINISHED_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
