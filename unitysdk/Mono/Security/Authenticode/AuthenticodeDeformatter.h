#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Authenticode/AuthenticodeBase.h"
#include "unitysdk/System/DateTime.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_SignedData; }
namespace Mono::Security { class PKCS7_SignerInfo; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Chain; }
namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_CHECKSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BE95420)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_COMPAREISSUERSERIAL_OFFSET UNITYSDK_OFFSET(0x1BE96890)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1BE95C10)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1BE95350)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1BE95890)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1BE959A0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BE95B00)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNINGCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1BE95C20)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BE95C00)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_ISTRUSTED_OFFSET UNITYSDK_OFFSET(0x1BE959D0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_RESET_OFFSET UNITYSDK_OFFSET(0x1BE95360)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1BE951E0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYCOUNTERSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BE96BC0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BE95C30)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE95120)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE95070)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int AuthenticodeDeformatter_TypeDefinitionIndex = 2477;

	class AuthenticodeDeformatter : public ::Mono::Security::Authenticode::AuthenticodeBase
	{
	public:
		::Il2CppArray<::System::Byte>* entry; // 0x38
		::Mono::Security::X509::X509Certificate* signingCertificate; // 0x40
		::Mono::Security::X509::X509Chain* signerChain; // 0x48
		::System::String* filename; // 0x50
		::Mono::Security::X509::X509Chain* timestampChain; // 0x58
		::Mono::Security::ASN1* signedHash; // 0x60
		::Il2CppArray<::System::Byte>* hash; // 0x68
		::Mono::Security::X509::X509CertificateCollection* coll; // 0x70
		::System::Boolean trustedRoot; // 0x78
		::System::Boolean trustedTimestampRoot; // 0x79
		::System::Int32 reason; // 0x7C
		::System::DateTime timestamp; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER__CTOR_1_OFFSET))(this, fileName);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_SET_FILENAME_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Hash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_HASH_OFFSET))(this);
		}

		::System::Int32 get_Reason()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_REASON_OFFSET))(this);
		}

		::System::Boolean IsTrusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_ISTRUSTED_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Signature()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNATURE_OFFSET))(this);
		}

		::System::DateTime get_Timestamp()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_TIMESTAMP_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_CERTIFICATES_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* get_SigningCertificate()
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNINGCERTIFICATE_OFFSET))(this);
		}

		::System::Boolean CheckSignature(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_CHECKSIGNATURE_OFFSET))(this, fileName);
		}

		::System::Boolean CompareIssuerSerial(::System::String* issuer, ::Il2CppArray<::System::Byte>* serial, ::Mono::Security::X509::X509Certificate* x509)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_COMPAREISSUERSERIAL_OFFSET))(this, issuer, serial, x509);
		}

		::System::Boolean VerifySignature(::Mono::Security::PKCS7_SignedData* sd, ::Il2CppArray<::System::Byte>* calculatedMessageDigest, ::System::Security::Cryptography::HashAlgorithm* ha)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::PKCS7_SignedData*, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::HashAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, sd, calculatedMessageDigest, ha);
		}

		::System::Boolean VerifyCounterSignature(::Mono::Security::PKCS7_SignerInfo* cs, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::PKCS7_SignerInfo*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYCOUNTERSIGNATURE_OFFSET))(this, cs, signature);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_RESET_OFFSET))(this);
		}
	};
}
