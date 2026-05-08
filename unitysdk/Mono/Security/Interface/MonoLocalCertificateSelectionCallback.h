#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C481540)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C481590)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C480E90)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C480E80)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoLocalCertificateSelectionCallback_TypeDefinitionIndex = 2441;

	class MonoLocalCertificateSelectionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(this, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET))(this, targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
