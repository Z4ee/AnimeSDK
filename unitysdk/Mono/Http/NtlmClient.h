#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Http { class NtlmSession; }
namespace System { class String; }
namespace System::Net { class Authorization; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }

#define MONO_HTTP_NTLMCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x18656320)
#define MONO_HTTP_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18656A20)
#define MONO_HTTP_NTLMCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x18656A10)
#define MONO_HTTP_NTLMCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18656A40)
#define MONO_HTTP_NTLMCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18656A30)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmClient_TypeDefinitionIndex = 2441;

	class NtlmClient : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>** StaticGet_cache()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>**)Il2CppClass::FromTypeDefinitionIndex(NtlmClient_TypeDefinitionIndex)->GetStaticField(0xEE80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT__CCTOR_OFFSET))();
		}

		::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_AUTHENTICATE_OFFSET))(this, challenge, webRequest, credentials);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::PVOID, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_PREAUTHENTICATE_OFFSET))(this, webRequest, credentials);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}
	};
}
