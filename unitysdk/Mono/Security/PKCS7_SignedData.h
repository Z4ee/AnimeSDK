#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_ContentInfo; }
namespace Mono::Security { class PKCS7_SignerInfo; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define MONO_SECURITY_PKCS7_SIGNEDDATA_GETASN1_OFFSET UNITYSDK_OFFSET(0x1BCD09E0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BCD2550)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1BCD09D0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1BCD1DD0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1BCD1DE0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CRLS_OFFSET UNITYSDK_OFFSET(0x1BCD1DF0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1BCD1E00)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_SIGNERINFO_OFFSET UNITYSDK_OFFSET(0x1BCD1E10)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_USEAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BCD1E40)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BCD1E20)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_OIDTONAME_OFFSET UNITYSDK_OFFSET(0x1BCD0820)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1BCD09B0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_SET_USEAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BCD1E50)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BCD1E30)
#define MONO_SECURITY_PKCS7_SIGNEDDATA_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BCD1E60)
#define MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCD0050)
#define MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BCD00B0)
#define MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCFE80)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_SignedData_TypeDefinitionIndex = 2281;

	class PKCS7_SignedData : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* crls; // 0x10
		::Mono::Security::PKCS7_ContentInfo* contentInfo; // 0x18
		::System::String* hashAlgorithm; // 0x20
		::Mono::Security::PKCS7_SignerInfo* signerInfo; // 0x28
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x30
		::System::Byte version; // 0x38
		::System::Boolean mda; // 0x39
		::System::Boolean signed_; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA__CTOR_2_OFFSET))(this, asn1);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CERTIFICATES_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* get_ContentInfo()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CONTENTINFO_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Crls()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_CRLS_OFFSET))(this);
		}

		::System::String* get_HashName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_HASHNAME_OFFSET))(this);
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_SET_HASHNAME_OFFSET))(this, value);
		}

		::Mono::Security::PKCS7_SignerInfo* get_SignerInfo()
		{
			return ((::Mono::Security::PKCS7_SignerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_SIGNERINFO_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::Boolean get_UseAuthenticatedAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GET_USEAUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_UseAuthenticatedAttributes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_SET_USEAUTHENTICATEDATTRIBUTES_OFFSET))(this, value);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_VERIFYSIGNATURE_OFFSET))(this, aa);
		}

		::System::String* OidToName(::System::String* oid)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_OIDTONAME_OFFSET))(this, oid);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNEDDATA_GETBYTES_OFFSET))(this);
		}
	};
}
