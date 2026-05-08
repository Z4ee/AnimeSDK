#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Security::Interface { class ValidationResult; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF53230)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF53260)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF52CF0)
#define MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF52CE0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CertificateValidationCallback2_TypeDefinitionIndex = 2375;

	class CertificateValidationCallback2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Security::Interface::ValidationResult* Invoke(::Mono::Security::X509::X509CertificateCollection* collection)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_INVOKE_OFFSET))(this, collection);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Security::X509::X509CertificateCollection* collection, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_BEGININVOKE_OFFSET))(this, collection, callback, object);
		}

		::Mono::Security::Interface::ValidationResult* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CERTIFICATEVALIDATIONCALLBACK2_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
