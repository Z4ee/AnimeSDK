#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ContentType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/TlsStream.h"

namespace Mono::Security::Protocol::Tls { class Context; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FAE3C70)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_ENCODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAE3AF0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FAE39A0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1FAE3980)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_HANDSHAKETYPE_OFFSET UNITYSDK_OFFSET(0x1FAE3990)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1FAE3A10)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAE3550)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAE39B0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FAE39E0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE33F0)

namespace Mono::Security::Protocol::Tls::Handshake
{
	inline static constexpr unsigned int HandshakeMessage_TypeDefinitionIndex = 2391;

	class HandshakeMessage : public ::Mono::Security::Protocol::Tls::TlsStream
	{
	public:
		::Mono::Security::Protocol::Tls::Context* context; // 0x40
		::Il2CppArray<::System::Byte>* cache; // 0x48
		::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType; // 0x50
		::Mono::Security::Protocol::Tls::ContentType contentType; // 0x51

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_OFFSET))(this, context, handshakeType);
		}

		::System::Void _ctor_1(::Mono::Security::Protocol::Tls::Context* context, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType, ::Mono::Security::Protocol::Tls::ContentType contentType)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::Mono::Security::Protocol::Tls::ContentType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_1_OFFSET))(this, context, handshakeType, contentType);
		}

		::System::Void _ctor_2(::Mono::Security::Protocol::Tls::Context* context, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE__CTOR_2_OFFSET))(this, context, handshakeType, data);
		}

		::Mono::Security::Protocol::Tls::Context* get_Context()
		{
			return ((::Mono::Security::Protocol::Tls::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_CONTEXT_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeType get_HandshakeType()
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_HANDSHAKETYPE_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::ContentType get_ContentType()
		{
			return ((::Mono::Security::Protocol::Tls::ContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_PROCESS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_UPDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* EncodeMessage()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_ENCODEMESSAGE_OFFSET))(this);
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* buffer1, ::Il2CppArray<::System::Byte>* buffer2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_HANDSHAKEMESSAGE_COMPARE_OFFSET))(buffer1, buffer2);
		}
	};
}
