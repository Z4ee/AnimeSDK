#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1C201280)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1C201290)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1C201550)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_SELECTCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x1C201030)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_SELECTCOMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1C201250)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C200FE0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C200FB0)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsClientHello_TypeDefinitionIndex = 2397;

	class TlsClientHello : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Il2CppArray<::System::Byte>* compressionMethods; // 0x58
		::Il2CppArray<::System::Byte>* random; // 0x60
		::Il2CppArray<::System::Byte>* sessionId; // 0x68
		::Il2CppArray<::System::Int16>* cipherSuites; // 0x70

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Void processProtocol(::System::Int16 protocol)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_PROCESSPROTOCOL_OFFSET))(this, protocol);
		}

		::System::Void selectCipherSuite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_SELECTCIPHERSUITE_OFFSET))(this);
		}

		::System::Void selectCompressionMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTHELLO_SELECTCOMPRESSIONMETHOD_OFFSET))(this);
		}
	};
}
