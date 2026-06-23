#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/RecordProtocol.h"

namespace Mono::Security::Protocol::Tls { class ServerContext; }
namespace Mono::Security::Protocol::Tls { class TlsStream; }
namespace Mono::Security::Protocol::Tls::Handshake { class HandshakeMessage; }
namespace Mono::Security::Protocol::Tls::Handshake::Server { class TlsClientCertificate; }
namespace System::IO { class Stream; }

#define MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_CREATECLIENTHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D366EB0)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_CREATESERVERHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D366980)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D366970)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_PROCESSHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D366BA0)
#define MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3668F0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int ServerRecordProtocol_TypeDefinitionIndex = 2371;

	class ServerRecordProtocol : public ::Mono::Security::Protocol::Tls::RecordProtocol
	{
	public:
		::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificate* cert; // 0x20

		::System::Void _ctor(::System::IO::Stream* innerStream, ::Mono::Security::Protocol::Tls::ServerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Mono::Security::Protocol::Tls::ServerContext*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL__CTOR_OFFSET))(this, innerStream, context);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* GetMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_GETMESSAGE_OFFSET))(this, type);
		}

		::System::Void ProcessHandshakeMessage(::Mono::Security::Protocol::Tls::TlsStream* handMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::TlsStream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_PROCESSHANDSHAKEMESSAGE_OFFSET))(this, handMsg);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createClientHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_CREATECLIENTHANDSHAKEMESSAGE_OFFSET))(this, type, buffer);
		}

		::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createServerHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type)
		{
			return ((::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*(*)(::PVOID, ::Mono::Security::Protocol::Tls::Handshake::HandshakeType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SERVERRECORDPROTOCOL_CREATESERVERHANDSHAKEMESSAGE_OFFSET))(this, type);
		}
	};
}
