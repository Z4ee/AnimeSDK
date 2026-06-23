#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class CipherSuiteCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETSSL3SUPPORTEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E0CC550)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETSUPPORTEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E0CC240)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETTLS1SUPPORTEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E0CC2D0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CipherSuiteFactory_TypeDefinitionIndex = 2349;

	class CipherSuiteFactory : public ::System::Object
	{
	public:
		static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetSupportedCiphers(::System::Boolean server, ::Mono::Security::Protocol::Tls::SecurityProtocolType protocol)
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuiteCollection*(*)(::System::Boolean, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETSUPPORTEDCIPHERS_OFFSET))(server, protocol);
		}

		static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetTls1SupportedCiphers()
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuiteCollection*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETTLS1SUPPORTEDCIPHERS_OFFSET))();
		}

		static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetSsl3SupportedCiphers()
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuiteCollection*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITEFACTORY_GETSSL3SUPPORTEDCIPHERS_OFFSET))();
		}
	};
}
