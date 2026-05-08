#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A567240)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS6_0__MONOTOPUBLIC_B__0_OFFSET UNITYSDK_OFFSET(0x1A567250)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass6_0_TypeDefinitionIndex = 2641;

	class CallbackHelpers___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _MonoToPublic_b__0(::System::Object* s, ::System::String* t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::Il2CppArray<::System::String*>* ai)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS6_0__MONOTOPUBLIC_B__0_OFFSET))(this, s, t, lc, rc, ai);
		}
	};
}
