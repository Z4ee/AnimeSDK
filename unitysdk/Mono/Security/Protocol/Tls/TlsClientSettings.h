#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Cryptography { class RSAManaged; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1BD8BE20)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1BD8BC80)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1BD8BCA0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x1BD8BC60)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1BD8BC90)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1BD8BCB0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x1BD8BC70)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_UPDATECERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1BD8BCC0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8BE30)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsClientSettings_TypeDefinitionIndex = 2387;

	class TlsClientSettings : public ::System::Object
	{
	public:
		::System::String* targetHost; // 0x10
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Certificate* clientCertificate; // 0x20
		::Mono::Security::Cryptography::RSAManaged* certificateRSA; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get_TargetHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_TARGETHOST_OFFSET))(this);
		}

		::System::Void set_TargetHost(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_TARGETHOST_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_Certificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Void set_Certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_CERTIFICATES_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Void set_ClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_SET_CLIENTCERTIFICATE_OFFSET))(this, value);
		}

		::Mono::Security::Cryptography::RSAManaged* get_CertificateRSA()
		{
			return ((::Mono::Security::Cryptography::RSAManaged*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_GET_CERTIFICATERSA_OFFSET))(this);
		}

		::System::Void UpdateCertificateRSA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSCLIENTSETTINGS_UPDATECERTIFICATERSA_OFFSET))(this);
		}
	};
}
