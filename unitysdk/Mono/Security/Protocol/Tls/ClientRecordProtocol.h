#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/RecordProtocol.h"

namespace Mono::Security::Protocol::Tls { class ClientContext; }
namespace Mono::Security::Protocol::Tls { class TlsStream; }
namespace Mono::Security::Protocol::Tls::Handshake { class HandshakeMessage; }
namespace System::IO { class Stream; }

#define MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_CREATECLIENTHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E5CB4C0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_CREATESERVERHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E5CB910)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E5CB4B0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_PROCESSHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E5CB5F0)
#define MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CB430)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ClientRecordProtocol_TypeDefinitionIndex = 2351;

	class ClientRecordProtocol : public ::Mono::Security::Protocol::Tls::RecordProtocol
	{
	public:
		::System::Void _ctor(::System::IO::Stream* innerStream, ::Mono::Security::Protocol::Tls::ClientContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Mono::Security::Protocol::Tls::ClientContext*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL__CTOR_OFFSET))(this, innerStream, context);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* GetMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_GETMESSAGE_OFFSET))(this, type);
		}

		::System::Void ProcessHandshakeMessage(::Mono::Security::Protocol::Tls::TlsStream* handMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::TlsStream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_PROCESSHANDSHAKEMESSAGE_OFFSET))(this, handMsg);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createClientHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_CREATECLIENTHANDSHAKEMESSAGE_OFFSET))(this, type);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createServerHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CLIENTRECORDPROTOCOL_CREATESERVERHANDSHAKEMESSAGE_OFFSET))(this, type, buffer);
		}
	};
}
