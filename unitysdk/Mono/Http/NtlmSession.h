#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Protocol::Ntlm { class MessageBase; }
namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C85D570)
#define MONO_HTTP_NTLMSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85D560)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmSession_TypeDefinitionIndex = 2647;

	class NtlmSession : public ::System::Object
	{
	public:
		::Mono::Security::Protocol::Ntlm::MessageBase* message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION__CTOR_OFFSET))(this);
		}

		::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET))(this, challenge, webRequest, credentials);
		}
	};
}
