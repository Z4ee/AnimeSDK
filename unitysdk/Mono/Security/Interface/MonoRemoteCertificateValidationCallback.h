#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x161430D0)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16143170)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16142A10)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x161429F0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoRemoteCertificateValidationCallback_TypeDefinitionIndex = 2280;

	class MonoRemoteCertificateValidationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(this, targetHost, certificate, chain, sslPolicyErrors);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET))(this, targetHost, certificate, chain, sslPolicyErrors, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
