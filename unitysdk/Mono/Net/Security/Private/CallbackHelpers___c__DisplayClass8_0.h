#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5672C0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS8_0__MONOTOINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1A5672D0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass8_0_TypeDefinitionIndex = 2643;

	class CallbackHelpers___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _MonoToInternal_b__0(::System::String* t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::Il2CppArray<::System::String*>* ai)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS8_0__MONOTOINTERNAL_B__0_OFFSET))(this, t, lc, rc, ai);
		}
	};
}
