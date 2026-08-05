#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E6F60)
#define MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E6FA0)
#define MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E69D0)
#define MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E69B0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int PrivateKeySelectionCallback_TypeDefinitionIndex = 2376;

	class PrivateKeySelectionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* Invoke(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_INVOKE_OFFSET))(this, certificate, targetHost);
		}

		::System::IAsyncResult* BeginInvoke(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::String* targetHost, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_BEGININVOKE_OFFSET))(this, certificate, targetHost, callback, object);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_PRIVATEKEYSELECTIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
