#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/ClientCertificateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x1C03E380)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1C03E300)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C03E2E0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATETYPES_OFFSET UNITYSDK_OFFSET(0x1C03E3A0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_DISTINGUISEDNAMES_OFFSET UNITYSDK_OFFSET(0x1C03E3C0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_RSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C03E310)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1C03E2C0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SIGNEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1C03E360)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x1C03E390)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C03E2F0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATETYPES_OFFSET UNITYSDK_OFFSET(0x1C03E3B0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_DISTINGUISEDNAMES_OFFSET UNITYSDK_OFFSET(0x1C03E3D0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_RSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C03E340)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1C03E2D0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SIGNEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1C03E370)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_UPDATECERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1C03E3F0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03E3E0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsServerSettings_TypeDefinitionIndex = 2389;

	class TlsServerSettings : public ::System::Object
	{
	public:
		::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* certificateTypes; // 0x10
		::Mono::Security::X509::X509CertificateCollection* certificates; // 0x18
		::System::Security::Cryptography::RSA* certificateRSA; // 0x20
		::System::Security::Cryptography::RSAParameters rsaParameters; // 0x28
		::Il2CppArray<::System::String*>* distinguisedNames; // 0x68
		::Il2CppArray<::System::Byte>* signedParams; // 0x70
		::System::Boolean certificateRequest; // 0x78
		::System::Boolean serverKeyExchange; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ServerKeyExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SERVERKEYEXCHANGE_OFFSET))(this);
		}

		::System::Void set_ServerKeyExchange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SERVERKEYEXCHANGE_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Void set_Certificates(::Mono::Security::X509::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATES_OFFSET))(this, value);
		}

		::System::Security::Cryptography::RSA* get_CertificateRSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATERSA_OFFSET))(this);
		}

		::System::Security::Cryptography::RSAParameters get_RsaParameters()
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_RSAPARAMETERS_OFFSET))(this);
		}

		::System::Void set_RsaParameters(::System::Security::Cryptography::RSAParameters value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_RSAPARAMETERS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_SignedParams()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SIGNEDPARAMS_OFFSET))(this);
		}

		::System::Void set_SignedParams(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SIGNEDPARAMS_OFFSET))(this, value);
		}

		::System::Boolean get_CertificateRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATEREQUEST_OFFSET))(this);
		}

		::System::Void set_CertificateRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATEREQUEST_OFFSET))(this, value);
		}

		::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* get_CertificateTypes()
		{
			return ((::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATETYPES_OFFSET))(this);
		}

		::System::Void set_CertificateTypes(::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATETYPES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_DistinguisedNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_DISTINGUISEDNAMES_OFFSET))(this);
		}

		::System::Void set_DistinguisedNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_DISTINGUISEDNAMES_OFFSET))(this, value);
		}

		::System::Void UpdateCertificateRSA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_UPDATECERTIFICATERSA_OFFSET))(this);
		}
	};
}
