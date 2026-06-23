#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Security { class RemoteCertValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C886430)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS3_0__INTERNALTOPUBLIC_B__0_OFFSET UNITYSDK_OFFSET(0x1C886440)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers___c__DisplayClass3_0_TypeDefinitionIndex = 2637;

	class CallbackHelpers___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* hostname; // 0x10
		::System::Net::Security::RemoteCertValidationCallback* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalToPublic_b__0(::System::Object* s, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch, ::System::Net::Security::SslPolicyErrors e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS___C__DISPLAYCLASS3_0__INTERNALTOPUBLIC_B__0_OFFSET))(this, s, c, ch, e);
		}
	};
}
