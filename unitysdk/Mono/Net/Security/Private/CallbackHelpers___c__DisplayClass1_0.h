#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Security { class LocalCertificateSelectionCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0C310)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS1_0__PUBLICTOMONO_B__0_OFFSET UNITYSDK_OFFSET(0x1DD0C320)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass1_0_TypeDefinitionIndex = 2635;

	class CallbackHelpers___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Net::Security::LocalCertificateSelectionCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _PublicToMono_b__0(::System::String* t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::Il2CppArray<::System::String*>* ai)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS1_0__PUBLICTOMONO_B__0_OFFSET))(this, t, lc, rc, ai);
		}
	};
}
