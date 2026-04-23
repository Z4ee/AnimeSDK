#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net::Security { class MonoTlsStream; }
namespace Mono::Net::Security { class ServerCertValidationCallbackWrapper; }
namespace Mono::Security::Interface { class ICertificateValidator; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Security::Interface { class ValidationResult; }
namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Net::Security { class LocalCertSelectionCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A09ABB0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A09ADA0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1A09A7E0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A09AE80)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A09AE90)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1A09B220)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A09AED0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_1_OFFSET UNITYSDK_OFFSET(0x1A09B3F0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x1A09B110)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09A850)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ChainValidationHelper_TypeDefinitionIndex = 2424;

	class ChainValidationHelper : public ::System::Object
	{
	public:
		::System::Object* sender; // 0x10
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x18
		::System::Net::HttpWebRequest* request; // 0x20
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x28
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x30
		::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper; // 0x38
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x40
		::System::Net::Security::LocalCertSelectionCallback* certSelectionCallback; // 0x48

		::System::Void _ctor(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings, ::System::Boolean cloneSettings, ::Mono::Net::Security::MonoTlsStream* stream, ::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::Mono::Net::Security::MonoTlsStream*, ::Mono::Net::Security::ServerCertValidationCallbackWrapper*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET))(this, provider, settings, cloneSettings, stream, callbackWrapper);
		}

		static ::Mono::Security::Interface::ICertificateValidator* GetInternalValidator(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(provider, settings);
		}

		static ::Mono::Net::Security::ChainValidationHelper* Create(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings*& settings, ::Mono::Net::Security::MonoTlsStream* stream)
		{
			return ((::Mono::Net::Security::ChainValidationHelper*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*&, ::Mono::Net::Security::MonoTlsStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET))(provider, settings, stream);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET))(targetHost, localCertificates, remoteCertificate, acceptableIssuers);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean SelectClientCertificate(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers, ::System::Security::Cryptography::X509Certificates::X509Certificate*& clientCertificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::Security::Cryptography::X509Certificates::X509Certificate*&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET))(this, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
		}

		::Mono::Security::Interface::ValidationResult* ValidateCertificate(::System::String* host, ::System::Boolean serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET))(this, host, serverMode, certs);
		}

		::Mono::Security::Interface::ValidationResult* ValidateCertificate_1(::System::String* host, ::System::Boolean serverMode, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_1_OFFSET))(this, host, serverMode, leaf, chain);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain(::System::String* host, ::System::Boolean server, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::Net::Security::SslPolicyErrors errors)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET))(this, host, server, leaf, chain, certs, errors);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain_1(::System::String* host, ::System::Boolean server, ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain*& chain, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, ::System::Net::Security::SslPolicyErrors errors)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*&, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_1_OFFSET))(this, host, server, leaf, chain, certs, errors);
		}
	};
}
