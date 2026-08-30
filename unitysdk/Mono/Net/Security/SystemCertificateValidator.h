#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CREATEX509CHAIN_OFFSET UNITYSDK_OFFSET(0x1C4801E0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET UNITYSDK_OFFSET(0x1C477E20)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4800E0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int SystemCertificateValidator_TypeDefinitionIndex = 2447;

	class SystemCertificateValidator : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* StaticGet_s_flags()
		{
			return (::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*)Il2CppClass::FromTypeDefinitionIndex(SystemCertificateValidator_TypeDefinitionIndex)->GetStaticField(0xCFF0);
		}
		static ::System::Boolean* StaticGet_is_macosx()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SystemCertificateValidator_TypeDefinitionIndex)->GetStaticField(0xCFF4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::X509Certificates::X509Chain* CreateX509Chain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Chain*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_CREATEX509CHAIN_OFFSET))(a1);
		}

		static ::System::Boolean NeedsChain(::Mono::Security::Interface::MonoTlsSettings* a1)
		{
			return ((::System::Boolean(*)(::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET))(a1);
		}
	};
}
