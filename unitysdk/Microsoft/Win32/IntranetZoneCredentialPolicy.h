#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class IAuthenticationModule; }
namespace System::Net { class NetworkCredential; }
namespace System::Net { class WebRequest; }

#define MICROSOFT_WIN32_INTRANETZONECREDENTIALPOLICY_SHOULDSENDCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x1A565350)
#define MICROSOFT_WIN32_INTRANETZONECREDENTIALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A565310)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int IntranetZoneCredentialPolicy_TypeDefinitionIndex = 4293;

	class IntranetZoneCredentialPolicy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_INTRANETZONECREDENTIALPOLICY__CTOR_OFFSET))(this);
		}

		::System::Boolean ShouldSendCredential(::System::Uri* challengeUri, ::System::Net::WebRequest* request, ::System::Net::NetworkCredential* credential, ::System::Net::IAuthenticationModule* authModule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Net::WebRequest*, ::System::Net::NetworkCredential*, ::System::Net::IAuthenticationModule*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_INTRANETZONECREDENTIALPOLICY_SHOULDSENDCREDENTIAL_OFFSET))(this, challengeUri, request, credential, authModule);
		}
	};
}
