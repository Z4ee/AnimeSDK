#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D243160)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2431B0)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D243130)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2430B0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoLocalCertificateSelectionCallback_TypeDefinitionIndex = 2293;

	class MonoLocalCertificateSelectionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::Il2CppArray<::System::String*>* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
