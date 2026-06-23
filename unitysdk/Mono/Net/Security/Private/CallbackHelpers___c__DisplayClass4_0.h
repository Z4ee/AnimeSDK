#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Security { class LocalCertSelectionCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C886470)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS4_0__INTERNALTOMONO_B__0_OFFSET UNITYSDK_OFFSET(0x1C886480)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass4_0_TypeDefinitionIndex = 2638;

	class CallbackHelpers___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Net::Security::LocalCertSelectionCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _InternalToMono_b__0(::System::String* t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::Il2CppArray<::System::String*>* ai)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS4_0__INTERNALTOMONO_B__0_OFFSET))(this, t, lc, rc, ai);
		}
	};
}
