#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocolCode.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DEBUG_OFFSET UNITYSDK_OFFSET(0x1C885930)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C885C60)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C885BB0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C885C70)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GETPROTOCOLVERSIONS_OFFSET UNITYSDK_OFFSET(0x1C8859A0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ASKFORCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C885970)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C885990)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1C885980)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1C885940)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C8859F0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1C8858E0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1C885910)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x1C885960)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C8858F0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x1C885950)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C885AA0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1C885A50)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C885A00)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C885770)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileTlsContext_TypeDefinitionIndex = 2628;

	class MobileTlsContext : public ::System::Object
	{
	public:
		::Mono::Security::Interface::ICertificateValidator2* certificateValidator; // 0x10
		::System::String* targetHost; // 0x18
		::System::String* serverName; // 0x20
		::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate; // 0x28
		::Mono::Net::Security::MobileAuthenticatedStream* parent; // 0x30
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x38
		::System::Boolean serverMode; // 0x40
		::System::Boolean askForClientCert; // 0x41
		::System::Security::Authentication::SslProtocols enabledProtocols; // 0x44

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

		::Mono::Security::Interface::MonoTlsProvider* get_Provider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void Debug(::System::String* message, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_DEBUG_OFFSET))(this, message, args);
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

		::System::Boolean get_AskForClientCertificate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ASKFORCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Authentication::SslProtocols get_EnabledProtocols()
		{
			return ((::System::Security::Authentication::SslProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ENABLEDPROTOCOLS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Void GetProtocolVersions(::Mono::Security::Interface::TlsProtocolCode& min, ::Mono::Security::Interface::TlsProtocolCode& max)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::TlsProtocolCode&, ::Mono::Security::Interface::TlsProtocolCode&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GETPROTOCOLVERSIONS_OFFSET))(this, min, max);
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
