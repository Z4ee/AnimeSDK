#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Tls { class CertificateSelectionCallback; }
namespace Mono::Security::Protocol::Tls { class PrivateKeySelectionCallback; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC250)
#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC290)
#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E5CC2A0)
#define MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C___CTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1E5CC2E0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int HttpsClientStream___c_TypeDefinitionIndex = 2361;

	class HttpsClientStream___c : public ::System::Object
	{
	public:
		static ::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback** StaticGet___9__2_1()
		{
			return (::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback**)Il2CppClass::FromTypeDefinitionIndex(HttpsClientStream___c_TypeDefinitionIndex)->GetStaticField(0x23F0);
		}
		static ::Mono::Security::Protocol::Tls::CertificateSelectionCallback** StaticGet___9__2_0()
		{
			return (::Mono::Security::Protocol::Tls::CertificateSelectionCallback**)Il2CppClass::FromTypeDefinitionIndex(HttpsClientStream___c_TypeDefinitionIndex)->GetStaticField(0x23F8);
		}
		static ::Mono::Security::Protocol::Tls::HttpsClientStream___c** StaticGet___9()
		{
			return (::Mono::Security::Protocol::Tls::HttpsClientStream___c**)Il2CppClass::FromTypeDefinitionIndex(HttpsClientStream___c_TypeDefinitionIndex)->GetStaticField(0x2400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* __ctor_b__2_0(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCerts, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C___CTOR_B__2_0_OFFSET))(this, clientCerts, serverCertificate, targetHost, serverRequestedCertificates);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* __ctor_b__2_1(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HTTPSCLIENTSTREAM___C___CTOR_B__2_1_OFFSET))(this, certificate, targetHost);
		}
	};
}
