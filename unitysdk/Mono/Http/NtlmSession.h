#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Ntlm { class MessageBase; }
namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1AF02040)
#define MONO_HTTP_NTLMSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF02670)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmSession_TypeDefinitionIndex = 2441;

	class NtlmSession : public ::System::Object
	{
	public:
		::Mono::Security::Protocol::Ntlm::MessageBase* message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION__CTOR_OFFSET))(this);
		}

		::System::Net::Authorization* Authenticate(::System::String* a1, ::System::Net::WebRequest* a2, ::System::Net::ICredentials* a3)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
