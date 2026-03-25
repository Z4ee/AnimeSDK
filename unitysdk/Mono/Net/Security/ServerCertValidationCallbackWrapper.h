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

#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x186694B0)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18669550)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18661130)
#define MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18669490)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ServerCertValidationCallbackWrapper_TypeDefinitionIndex = 2422;

	class ServerCertValidationCallbackWrapper : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Net::ServerCertValidationCallback* callback, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_INVOKE_OFFSET))(this, callback, certificate, chain, sslPolicyErrors);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::ServerCertValidationCallback* callback, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_BEGININVOKE_OFFSET))(this, callback, certificate, chain, sslPolicyErrors, __callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SERVERCERTVALIDATIONCALLBACKWRAPPER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
