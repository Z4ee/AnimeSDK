#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C480010)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4800B0)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C477DF0)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47FF20)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ServerCertValidationCallbackWrapper_TypeDefinitionIndex = 2434;

	class ServerCertValidationCallbackWrapper : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Net::ServerCertValidationCallback* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::Mono::Security::Interface::MonoSslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::ServerCertValidationCallback* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::Mono::Security::Interface::MonoSslPolicyErrors a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
