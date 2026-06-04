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

#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18529950)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185299F0)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18529920)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x185298A0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoRemoteCertificateValidationCallback_TypeDefinitionIndex = 2281;

	class MonoRemoteCertificateValidationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::Mono::Security::Interface::MonoSslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::Mono::Security::Interface::MonoSslPolicyErrors a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
