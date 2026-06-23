#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7F8CD0)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7F8D10)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7F8740)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8720)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CertificateValidationCallback_TypeDefinitionIndex = 2373;

	class CertificateValidationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* certificateErrors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(this, certificate, certificateErrors);
		}

		::System::IAsyncResult* BeginInvoke(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Il2CppArray<::System::Int32>* certificateErrors, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Int32>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_BEGININVOKE_OFFSET))(this, certificate, certificateErrors, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
