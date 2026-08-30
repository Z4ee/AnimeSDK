#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileAuthenticatedStream.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

namespace Mono::Net::Security { class MobileTlsContext; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1E901750)
#define MONO_UNITY_UNITYTLSSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E90AD00)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsStream_TypeDefinitionIndex = 2404;

	class UnityTlsStream : public ::Mono::Net::Security::MobileAuthenticatedStream
	{
	public:
		::System::Void _ctor(::System::IO::Stream* a1, ::System::Boolean a2, ::System::Net::Security::SslStream* a3, ::Mono::Security::Interface::MonoTlsSettings* a4, ::Mono::Security::Interface::MonoTlsProvider* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Net::Security::MobileTlsContext* CreateContext(::System::Boolean a1, ::System::String* a2, ::System::Security::Authentication::SslProtocols a3, ::System::Security::Cryptography::X509Certificates::X509Certificate* a4, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a5, ::System::Boolean a6)
		{
			return ((::Mono::Net::Security::MobileTlsContext*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
