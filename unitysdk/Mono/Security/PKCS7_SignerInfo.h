#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define MONO_SECURITY_PKCS7_SIGNERINFO_GETASN1_OFFSET UNITYSDK_OFFSET(0x1F50CF90)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F50E2B0)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1F50CF80)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F50DFE0)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F50DFF0)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F50E010)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1F50CD70)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F50E030)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1F50CD80)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F50E050)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F50CE80)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F50E280)
#define MONO_SECURITY_PKCS7_SIGNERINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F50E290)
#define MONO_SECURITY_PKCS7_SIGNERINFO_SET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F50E000)
#define MONO_SECURITY_PKCS7_SIGNERINFO_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F50E020)
#define MONO_SECURITY_PKCS7_SIGNERINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1F50E040)
#define MONO_SECURITY_PKCS7_SIGNERINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F50E150)
#define MONO_SECURITY_PKCS7_SIGNERINFO_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F50E2A0)
#define MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F50C7D0)
#define MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F50C830)
#define MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F50C6B0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_SignerInfo_TypeDefinitionIndex = 2281;

	class PKCS7_SignerInfo : public ::System::Object
	{
	public:
		::System::Security::Cryptography::AsymmetricAlgorithm* key; // 0x10
		::System::String* hashAlgorithm; // 0x18
		::Il2CppArray<::System::Byte>* serial; // 0x20
		::System::Collections::ArrayList* unauthenticatedAttributes; // 0x28
		::Il2CppArray<::System::Byte>* ski; // 0x30
		::Mono::Security::X509::X509Certificate* x509; // 0x38
		::System::Collections::ArrayList* authenticatedAttributes; // 0x40
		::Il2CppArray<::System::Byte>* signature; // 0x48
		::System::String* issuer; // 0x50
		::System::Byte version; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO__CTOR_2_OFFSET))(this, asn1);
		}

		::System::String* get_IssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_ISSUERNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_SERIALNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectKeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_ASN1_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_AuthenticatedAttributes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate* get_Certificate()
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_CERTIFICATE_OFFSET))(this);
		}

		::System::Void set_Certificate(::Mono::Security::X509::X509Certificate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_SET_CERTIFICATE_OFFSET))(this, value);
		}

		::System::String* get_HashName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_HASHNAME_OFFSET))(this);
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_SET_HASHNAME_OFFSET))(this, value);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_Key()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_SET_KEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Signature()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::Collections::ArrayList* get_UnauthenticatedAttributes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_SET_VERSION_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_SIGNERINFO_GETBYTES_OFFSET))(this);
		}
	};
}
