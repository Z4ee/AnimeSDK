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

#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A844A70)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A844C80)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1A844600)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A844DD0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A844DE0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_1_OFFSET UNITYSDK_OFFSET(0x1A8450E0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A844E30)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_1_OFFSET UNITYSDK_OFFSET(0x1A845260)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x1A845010)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A844670)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ChainValidationHelper_TypeDefinitionIndex = 2428;

	class ChainValidationHelper : public ::System::Object
	{
	public:
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x10
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x18
		::System::Object* sender; // 0x20
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x28
		::System::Net::Security::LocalCertSelectionCallback* certSelectionCallback; // 0x30
		::System::Net::HttpWebRequest* request; // 0x38
		::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper; // 0x40
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x48

		::System::Void _ctor(::Mono::Security::Interface::MonoTlsProvider* a1, ::Mono::Security::Interface::MonoTlsSettings* a2, ::System::Boolean a3, ::Mono::Net::Security::MonoTlsStream* a4, ::Mono::Net::Security::ServerCertValidationCallbackWrapper* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::Mono::Net::Security::MonoTlsStream*, ::Mono::Net::Security::ServerCertValidationCallbackWrapper*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::Mono::Security::Interface::ICertificateValidator* GetInternalValidator(::Mono::Security::Interface::MonoTlsProvider* a1, ::Mono::Security::Interface::MonoTlsSettings* a2)
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(a1, a2);
		}

		static ::Mono::Net::Security::ChainValidationHelper* Create(::Mono::Security::Interface::MonoTlsProvider* a1, ::Mono::Security::Interface::MonoTlsSettings*& a2, ::Mono::Net::Security::MonoTlsStream* a3)
		{
			return ((::Mono::Net::Security::ChainValidationHelper*(*)(::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*&, ::Mono::Net::Security::MonoTlsStream*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean SelectClientCertificate(::System::String* a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::Il2CppArray<::System::String*>* a4, ::System::Security::Cryptography::X509Certificates::X509Certificate*& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::String*>*, ::System::Security::Cryptography::X509Certificates::X509Certificate*&))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Security::Interface::ValidationResult* ValidateCertificate(::System::String* a1, ::System::Boolean a2, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a3)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET))(this, a1, a2, a3);
		}

		::Mono::Security::Interface::ValidationResult* ValidateCertificate_1(::System::String* a1, ::System::Boolean a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::System::Security::Cryptography::X509Certificates::X509Chain* a4)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain(::System::String* a1, ::System::Boolean a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::System::Security::Cryptography::X509Certificates::X509Chain* a4, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a5, ::System::Net::Security::SslPolicyErrors a6)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain_1(::System::String* a1, ::System::Boolean a2, ::System::Security::Cryptography::X509Certificates::X509Certificate* a3, ::System::Security::Cryptography::X509Certificates::X509Chain*& a4, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a5, ::System::Net::Security::SslPolicyErrors a6)
		{
			return ((::Mono::Security::Interface::ValidationResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*&, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
