#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net::Security::Private { class LegacySslStream; }
namespace Mono::Security::Interface { class ValidationResult; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__BEGINAUTHENTICATEASCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x1A567300)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__BEGINAUTHENTICATEASCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x1A5677D0)
#define MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5672F0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int LegacySslStream___c__DisplayClass56_0_TypeDefinitionIndex = 2645;

	class LegacySslStream___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x10
		::Mono::Net::Security::Private::LegacySslStream* __4__this; // 0x18
		::System::String* targetHost; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* _BeginAuthenticateAsClient_b__0(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::System::String* host)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__BEGINAUTHENTICATEASCLIENT_B__0_OFFSET))(this, cert, host);
		}

		::Mono::Security::Interface::ValidationResult* _BeginAuthenticateAsClient_b__1(::Mono::Security::X509::X509CertificateCollection* mcerts)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_LEGACYSSLSTREAM___C__DISPLAYCLASS56_0__BEGINAUTHENTICATEASCLIENT_B__1_OFFSET))(this, mcerts);
		}
	};
}
