#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.h"

namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2Impl; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GETNATIVECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1FBB5290)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1FBB5240)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_HASNATIVECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FBB5230)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5220)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProvider_TypeDefinitionIndex = 2441;

	class MonoTlsProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasNativeCertificates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_HASNATIVECERTIFICATES_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::Il2CppArray<::System::Byte>* data, ::System::String* password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags flags)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET))(this, data, password, flags);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate_1(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GETNATIVECERTIFICATE_1_OFFSET))(this, certificate);
		}
	};
}
