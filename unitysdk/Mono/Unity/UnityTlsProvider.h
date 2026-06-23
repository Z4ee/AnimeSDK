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

#define MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6C0AF0)
#define MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6C0AD0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C6C0A20)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C6C09E0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1C6C0AC0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1C6C0AB0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1C6C0AA0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1C6C0A90)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6C0A80)
#define MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C6C0BA0)
#define MONO_UNITY_UNITYTLSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C16D0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsProvider_TypeDefinitionIndex = 2581;

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

		::Mono::Security::Interface::IMonoSslStream* CreateSslStream(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET))(this, innerStream, leaveInnerStreamOpen, settings);
		}

		::Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID, ::System::Net::Security::SslStream*, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAMINTERNAL_OFFSET))(this, sslStream, innerStream, leaveInnerStreamOpen, settings);
		}

		::System::Boolean ValidateCertificate(::Mono::Security::Interface::ICertificateValidator2* validator, ::System::String* targetHost, ::System::Boolean serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::System::Boolean wantsChain, ::System::Security::Cryptography::X509Certificates::X509Chain*& chain, ::Mono::Security::Interface::MonoSslPolicyErrors& errors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::Interface::ICertificateValidator2*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain*&, ::Mono::Security::Interface::MonoSslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(this, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
		}
	};
}
