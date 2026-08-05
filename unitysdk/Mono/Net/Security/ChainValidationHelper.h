#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/MonoSslPolicyErrors.h"
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

#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CLONEWITHCALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x1E7DB3A0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7DB7B0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E7DB8B0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETDEFAULTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E7DB2B0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E7DAE80)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_HASCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E7DB910)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1E7DB8F0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1E7DB900)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E7DB680)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKESYSTEMVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E7DC3B0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1E7DB960)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E7DB920)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1E7DBE50)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E7DBCB0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_1_OFFSET UNITYSDK_OFFSET(0x1E7DC000)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x1E7DBBE0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1E7DB970)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DAF10)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB530)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ChainValidationHelper_TypeDefinitionIndex = 2619;

	class ChainValidationHelper : public ::System::Object
	{
	public:
		::System::Object* sender; // 0x10
		::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper; // 0x18
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x20
		::System::Net::HttpWebRequest* request; // 0x28
		::System::Net::Security::LocalCertSelectionCallback* certSelectionCallback; // 0x30
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x38
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x40
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x48

		::System::Void _ctor(::Mono::Net::Security::ChainValidationHelper* other, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::ChainValidationHelper*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::ServerCertValidationCallbackWrapper*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET))(this, other, provider, settings, callbackWrapper);
		}

		::System::Void _ctor_1(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings, ::System::Boolean cloneSettings, ::Mono::Net::Security::MonoTlsStream* stream, ::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::Mono::Net::Security::MonoTlsStream*, ::Mono::Net::Security::ServerCertValidationCallbackWrapper*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_1_OFFSET))(this, provider, settings, cloneSettings, stream, callbackWrapper);
		}

		static ::Mono::Security::Interface::ICertificateValidator* GetInternalValidator(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(provider, settings);
		}

		static ::Mono::Security::Interface::ICertificateValidator* GetDefaultValidator(::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETDEFAULTVALIDATOR_OFFSET))(settings);
		}

		static ::Mono::Net::Security::ChainValidationHelper* CloneWithCallbackWrapper(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings*& settings, ::Mono::Net::Security::ServerCertValidationCallbackWrapper* wrapper)
		{
			return ((::Mono::Net::Security::ChainValidationHelper*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*&, ::Mono::Net::Security::ServerCertValidationCallbackWrapper*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CLONEWITHCALLBACKWRAPPER_OFFSET))(provider, settings, wrapper);
		}

		static ::System::Boolean InvokeCallback(::System::Net::ServerCertValidationCallback* callback, ::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors)
		{
			return ((::System::Boolean(*)(::System::Net::ServerCertValidationCallback*, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKECALLBACK_OFFSET))(callback, sender, certificate, chain, sslPolicyErrors);
		}

		static ::Mono::Net::Security::ChainValidationHelper* Create(::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings*& settings, ::Mono::Net::Security::MonoTlsStream* stream)
		{
			return ((::Mono::Net::Security::ChainValidationHelper*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*&, ::Mono::Net::Security::MonoTlsStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET))(provider, settings, stream);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET))(targetHost, localCertificates, remoteCertificate, acceptableIssuers);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_Provider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_PROVIDER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean get_HasCertificateSelectionCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_HASCERTIFICATESELECTIONCALLBACK_OFFSET))(this);
		}

		::System::Boolean SelectClientCertificate(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers, ::System::Security::Cryptography::X509Certificates::X509Certificate*& clientCertificate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::Security::Cryptography::X509Certificates::X509Certificate*&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET))(this, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Il2CppArray<::System::String*>* acceptableIssuers)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_1_OFFSET))(this, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
		}

		::System::Boolean ValidateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::Mono::Security::Interface::MonoSslPolicyErrors errors)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Security::Interface::MonoSslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECLIENTCERTIFICATE_OFFSET))(this, certificate, errors);
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

		::System::Boolean InvokeSystemValidator(::System::String* targetHost, ::System::Boolean serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors& xerrors, ::System::Int32& status11)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKESYSTEMVALIDATOR_OFFSET))(this, targetHost, serverMode, certificates, chain, xerrors, status11);
		}
	};
}
