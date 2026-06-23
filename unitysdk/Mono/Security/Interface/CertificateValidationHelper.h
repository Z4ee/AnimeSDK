#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class ICertificateValidator; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }

#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETDEFAULTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1D362BA0)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1D362B30)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1D362C50)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GET_SUPPORTSTRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1D362AD0)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GET_SUPPORTSX509CHAIN_OFFSET UNITYSDK_OFFSET(0x1D362A70)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3629D0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int CertificateValidationHelper_TypeDefinitionIndex = 2430;

	class CertificateValidationHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_supportsTrustAnchors()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CertificateValidationHelper_TypeDefinitionIndex)->GetStaticField(0xF30);
		}
		static ::System::Boolean* StaticGet_noX509Chain()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CertificateValidationHelper_TypeDefinitionIndex)->GetStaticField(0xF31);
		}
		// static const ::System::String* SecurityLibrary; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_SupportsX509Chain()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GET_SUPPORTSX509CHAIN_OFFSET))();
		}

		static ::System::Boolean get_SupportsTrustAnchors()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GET_SUPPORTSTRUSTANCHORS_OFFSET))();
		}

		static ::Mono::Security::Interface::ICertificateValidator2* GetInternalValidator(::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider)
		{
			return ((::Mono::Security::Interface::ICertificateValidator2*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(settings, provider);
		}

		static ::Mono::Security::Interface::ICertificateValidator2* GetDefaultValidator(::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider)
		{
			return ((::Mono::Security::Interface::ICertificateValidator2*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETDEFAULTVALIDATOR_OFFSET))(settings, provider);
		}

		static ::Mono::Security::Interface::ICertificateValidator* GetValidator(::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETVALIDATOR_OFFSET))(settings);
		}
	};
}
