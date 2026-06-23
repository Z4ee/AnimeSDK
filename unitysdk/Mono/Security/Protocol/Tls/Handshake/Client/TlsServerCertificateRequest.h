#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/ClientCertificateType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1D365C40)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1D365C50)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D365BF0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D365BC0)

namespace Mono::Security::Protocol::Tls::Handshake::Client
{
	inline static constexpr unsigned int TlsServerCertificateRequest_TypeDefinitionIndex = 2410;

	class TlsServerCertificateRequest : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Il2CppArray<::System::String*>* distinguisedNames; // 0x58
		::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* certificateTypes; // 0x60

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_CLIENT_TLSSERVERCERTIFICATEREQUEST_PROCESSASTLS1_OFFSET))(this);
		}
	};
}
