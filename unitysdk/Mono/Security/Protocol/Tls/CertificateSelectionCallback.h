#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E6FCBB0)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6FCC00)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6FC560)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC540)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CertificateSelectionCallback_TypeDefinitionIndex = 2375;

	class CertificateSelectionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
		}

		::System::IAsyncResult* BeginInvoke(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* serverRequestedCertificates, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates, callback, object);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
