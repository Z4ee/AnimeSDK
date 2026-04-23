#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A0A1BA0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A09F070)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A0A1BB0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1A0A1930)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1A0A1900)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A0A1940)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A0A18D0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x1A0A1920)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A0A18E0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x1A0A1910)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A0A19F0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1A0A19A0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A0A1950)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A17E0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileTlsContext_TypeDefinitionIndex = 2432;

	class MobileTlsContext : public ::System::Object
	{
	public:
		::Mono::Net::Security::MobileAuthenticatedStream* parent; // 0x10
		::System::String* targetHost; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x20
		::System::String* serverName; // 0x28
		::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate; // 0x30
		::Mono::Security::Interface::ICertificateValidator2* certificateValidator; // 0x38
		::System::Security::Authentication::SslProtocols enabledProtocols; // 0x40
		::System::Boolean serverMode; // 0x44
		::System::Boolean askForClientCert; // 0x45

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean serverMode, ::System::String* targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean askForClientCert)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT__CTOR_OFFSET))(this, parent, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* get_Parent()
		{
			return ((::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PARENT_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISSERVER_OFFSET))(this);
		}

		::System::String* get_TargetHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_TARGETHOST_OFFSET))(this);
		}

		::System::String* get_ServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SERVERNAME_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalServerCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALSERVERCERTIFICATE_OFFSET))(this);
		}

		::System::Boolean ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_OFFSET))(this, leaf, chain);
		}

		::System::Boolean ValidateCertificate_1(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_1_OFFSET))(this, certificates);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTCLIENTCERTIFICATE_OFFSET))(this, serverCertificate, acceptableIssuers);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_FINALIZE_OFFSET))(this);
		}
	};
}
