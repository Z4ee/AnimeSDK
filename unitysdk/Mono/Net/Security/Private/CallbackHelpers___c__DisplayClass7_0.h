#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0CAC0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS7_0__MONOTOINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1DD0CAD0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass7_0_TypeDefinitionIndex = 2641;

	class CallbackHelpers___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MonoToInternal_b__0(::System::String* h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS7_0__MONOTOINTERNAL_B__0_OFFSET))(this, h, c, ch, e);
		}
	};
}
