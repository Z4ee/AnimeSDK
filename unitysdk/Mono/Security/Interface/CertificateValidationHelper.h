#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x16142260)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161421C0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int CertificateValidationHelper_TypeDefinitionIndex = 2275;

	class CertificateValidationHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_noX509Chain()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CertificateValidationHelper_TypeDefinitionIndex)->GetStaticField(0x4DC0);
		}
		static ::System::Boolean* StaticGet_supportsTrustAnchors()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CertificateValidationHelper_TypeDefinitionIndex)->GetStaticField(0x4DC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER__CCTOR_OFFSET))();
		}

		static ::Mono::Security::Interface::ICertificateValidator2* GetInternalValidator(::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider)
		{
			return ((::Mono::Security::Interface::ICertificateValidator2*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(settings, provider);
		}
	};
}
