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

#define MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1A0A0C20)
#define MONO_UNITY_UNITYTLSSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1050)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsStream_TypeDefinitionIndex = 2393;

	class UnityTlsStream : public ::Mono::Net::Security::MobileAuthenticatedStream
	{
	public:
		::System::Void _ctor(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Security::Interface::MonoTlsProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM__CTOR_OFFSET))(this, innerStream, leaveInnerStreamOpen, owner, settings, provider);
		}

		::Mono::Net::Security::MobileTlsContext* CreateContext(::System::Boolean serverMode, ::System::String* targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean askForClientCert)
		{
			return ((::Mono::Net::Security::MobileTlsContext*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET))(this, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert);
		}
	};
}
