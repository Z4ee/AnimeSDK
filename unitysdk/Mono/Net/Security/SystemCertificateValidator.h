#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_BUILDX509CHAIN_OFFSET UNITYSDK_OFFSET(0x1B738900)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKCERTIFICATEUSAGE_OFFSET UNITYSDK_OFFSET(0x1B738AA0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1B739AC0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1B738EC0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKUSAGE_OFFSET UNITYSDK_OFFSET(0x1B738910)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CREATEX509CHAIN_OFFSET UNITYSDK_OFFSET(0x1B7387C0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_EVALUATESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B739270)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B7393B0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_MATCH_OFFSET UNITYSDK_OFFSET(0x1B7398D0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET UNITYSDK_OFFSET(0x1B7394A0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7387A0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int SystemCertificateValidator_TypeDefinitionIndex = 2632;

	class SystemCertificateValidator : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_is_macosx()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SystemCertificateValidator_TypeDefinitionIndex)->GetStaticField(0x1250);
		}
		static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* StaticGet_s_flags()
		{
			return (::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*)Il2CppClass::FromTypeDefinitionIndex(SystemCertificateValidator_TypeDefinitionIndex)->GetStaticField(0x1254);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::X509Certificates::X509Chain* CreateX509Chain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Chain*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CREATEX509CHAIN_OFFSET))(certs);
		}

		static ::System::Boolean BuildX509Chain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors& errors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_BUILDX509CHAIN_OFFSET))(certs, chain, errors, status11);
		}

		static ::System::Boolean CheckUsage(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::String* host, ::System::Net::Security::SslPolicyErrors& errors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::String*, ::System::Net::Security::SslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKUSAGE_OFFSET))(certs, host, errors, status11);
		}

		static ::System::Boolean EvaluateSystem(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* anchors, ::System::String* host, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors& errors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_EVALUATESYSTEM_OFFSET))(certs, anchors, host, chain, errors, status11);
		}

		static ::System::Boolean Evaluate(::Mono::Security::Interface::MonoTlsSettings* settings, ::System::String* host, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors& errors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::Mono::Security::Interface::MonoTlsSettings*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_EVALUATE_OFFSET))(settings, host, certs, chain, errors, status11);
		}

		static ::System::Boolean NeedsChain(::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Boolean(*)(::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET))(settings);
		}

		static ::System::Boolean CheckCertificateUsage(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKCERTIFICATEUSAGE_OFFSET))(cert);
		}

		static ::System::Boolean CheckServerIdentity(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert, ::System::String* targetHost)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKSERVERIDENTITY_OFFSET))(cert, targetHost);
		}

		static ::System::Boolean CheckDomainName(::System::String* subjectName, ::System::String* targetHost)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CHECKDOMAINNAME_OFFSET))(subjectName, targetHost);
		}

		static ::System::Boolean Match(::System::String* hostname, ::System::String* pattern)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_MATCH_OFFSET))(hostname, pattern);
		}
	};
}
