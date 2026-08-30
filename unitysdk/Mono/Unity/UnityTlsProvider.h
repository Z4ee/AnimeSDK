#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
#include "unitysdk/Mono/Security/Interface/MonoTlsProvider.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Security { class SslStream; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C486540)
#define MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1C47FC70)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4864B0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C4864A0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1C486530)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1C486520)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1C486510)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1C486500)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1C4864F0)
#define MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C477E30)
#define MONO_UNITY_UNITYTLSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C486610)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsProvider_TypeDefinitionIndex = 2403;

	class UnityTlsProvider : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_NAME_OFFSET))(this);
		}

		::System::Guid get_ID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_SupportsSslStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET))(this);
		}

		::System::Boolean get_SupportsMonoExtensions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET))(this);
		}

		::System::Boolean get_SupportsConnectionInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET))(this);
		}

		::System::Boolean get_SupportsCleanShutdown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET))(this);
		}

		::System::Security::Authentication::SslProtocols get_SupportedProtocols()
		{
			return ((::System::Security::Authentication::SslProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET))(this);
		}

		::Mono::Security::Interface::IMonoSslStream* CreateSslStream(::System::IO::Stream* a1, ::System::Boolean a2, ::Mono::Security::Interface::MonoTlsSettings* a3)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET))(this, a1, a2, a3);
		}

		::Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(::System::Net::Security::SslStream* a1, ::System::IO::Stream* a2, ::System::Boolean a3, ::Mono::Security::Interface::MonoTlsSettings* a4)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID, ::System::Net::Security::SslStream*, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAMINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ValidateCertificate(::Mono::Security::Interface::ICertificateValidator2* a1, ::System::String* a2, ::System::Boolean a3, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a4, ::System::Boolean a5, ::System::Security::Cryptography::X509Certificates::X509Chain*& a6, ::Mono::Security::Interface::MonoSslPolicyErrors& a7, ::System::Int32& a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::Interface::ICertificateValidator2*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain*&, ::Mono::Security::Interface::MonoSslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
