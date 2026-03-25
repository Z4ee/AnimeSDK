#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18669400)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS0_0__PUBLICTOMONO_B__0_OFFSET UNITYSDK_OFFSET(0x18669430)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass0_0_TypeDefinitionIndex = 2437;

	class CallbackHelpers___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Net::Security::RemoteCertificateValidationCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PublicToMono_b__0(::System::String* h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::Mono::Security::Interface::MonoSslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS0_0__PUBLICTOMONO_B__0_OFFSET))(this, h, c, ch, e);
		}
	};
}
