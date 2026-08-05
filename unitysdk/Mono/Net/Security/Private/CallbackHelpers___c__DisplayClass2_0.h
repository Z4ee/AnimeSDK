#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Security { class RemoteCertValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0C360)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS2_0__INTERNALTOMONO_B__0_OFFSET UNITYSDK_OFFSET(0x1DD0C370)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass2_0_TypeDefinitionIndex = 2636;

	class CallbackHelpers___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Net::Security::RemoteCertValidationCallback* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalToMono_b__0(::System::String* h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::Mono::Security::Interface::MonoSslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS2_0__INTERNALTOMONO_B__0_OFFSET))(this, h, c, ch, e);
		}
	};
}
