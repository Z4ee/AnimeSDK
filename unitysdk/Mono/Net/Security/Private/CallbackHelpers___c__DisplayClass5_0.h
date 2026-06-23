#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8864A0)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS5_0__MONOTOPUBLIC_B__0_OFFSET UNITYSDK_OFFSET(0x1C8864B0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass5_0_TypeDefinitionIndex = 2639;

	class CallbackHelpers___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MonoToPublic_b__0(::System::Object* t, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS5_0__MONOTOPUBLIC_B__0_OFFSET))(this, t, c, ch, e);
		}
	};
}
