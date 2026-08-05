#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Authenticode/AuthenticodeBase.h"
#include "unitysdk/Mono/Security/Authenticode/Authority.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_SignedData; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E6F8B20)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E6F8D20)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x1E6F8900)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E6F8920)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CRL_OFFSET UNITYSDK_OFFSET(0x1E6F8930)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E6F8AE0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1E6F8940)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_RSA_OFFSET UNITYSDK_OFFSET(0x1E6F8AA0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_TIMESTAMPURL_OFFSET UNITYSDK_OFFSET(0x1E6F8AC0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1E6F8B00)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_HEADER_OFFSET UNITYSDK_OFFSET(0x1E6F9580)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_OPUS_OFFSET UNITYSDK_OFFSET(0x1E6F8FF0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_PROCESSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E6F9F40)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SAVE_OFFSET UNITYSDK_OFFSET(0x1E6FA570)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x1E6F8910)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E6F8AF0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1E6F8990)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_RSA_OFFSET UNITYSDK_OFFSET(0x1E6F8AB0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_TIMESTAMPURL_OFFSET UNITYSDK_OFFSET(0x1E6F8AD0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1E6F8B10)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SIGN_OFFSET UNITYSDK_OFFSET(0x1E6FA9D0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMPREQUEST_OFFSET UNITYSDK_OFFSET(0x1E6F9DC0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1E6FAE00)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E6FA2A0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FB7B0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F8740)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int AuthenticodeFormatter_TypeDefinitionIndex = 2477;

	class AuthenticodeFormatter : public ::Mono::Security::Authenticode::AuthenticodeBase
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_obsolete()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AuthenticodeFormatter_TypeDefinitionIndex)->GetStaticField(0x2420);
		}
		// static const ::System::String* signedData; // 0x0
		// static const ::System::String* countersignature; // 0x0
		// static const ::System::String* spcStatementType; // 0x0
		// static const ::System::String* spcSpOpusInfo; // 0x0
		// static const ::System::String* spcPelmageData; // 0x0
		// static const ::System::String* commercialCodeSigning; // 0x0
		// static const ::System::String* timestampCountersignature; // 0x0
		::System::String* description; // 0x38
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x40
		::System::Uri* timestamp; // 0x48
		::System::Collections::ArrayList* crls; // 0x50
		::System::Uri* url; // 0x58
		::Mono::Security::PKCS7_SignedData* pkcs7; // 0x60
		::System::Security::Cryptography::RSA* rsa; // 0x68
		::System::String* hash; // 0x70
		::Mono::Security::ASN1* authenticode; // 0x78
		::Mono::Security::Authenticode::Authority authority; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CCTOR_OFFSET))();
		}

		::Mono::Security::Authenticode::Authority get_Authority()
		{
			return ((::Mono::Security::Authenticode::Authority(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_AUTHORITY_OFFSET))(this);
		}

		::System::Void set_Authority(::Mono::Security::Authenticode::Authority value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Authenticode::Authority))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_AUTHORITY_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Crl()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CRL_OFFSET))(this);
		}

		::System::String* get_Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_HASH_OFFSET))(this, value);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_RSA_OFFSET))(this);
		}

		::System::Void set_RSA(::System::Security::Cryptography::RSA* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_RSA_OFFSET))(this, value);
		}

		::System::Uri* get_TimestampUrl()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_TIMESTAMPURL_OFFSET))(this);
		}

		::System::Void set_TimestampUrl(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_TIMESTAMPURL_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::Uri* get_Url()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_URL_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* AlgorithmIdentifier(::System::String* oid)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ALGORITHMIDENTIFIER_OFFSET))(this, oid);
		}

		::Mono::Security::ASN1* Attribute(::System::String* oid, ::Mono::Security::ASN1* value)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::String*, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ATTRIBUTE_OFFSET))(this, oid, value);
		}

		::Mono::Security::ASN1* Opus(::System::String* description, ::System::String* url)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_OPUS_OFFSET))(this, description, url);
		}

		::Il2CppArray<::System::Byte>* Header(::Il2CppArray<::System::Byte>* fileHash, ::System::String* hashAlgorithm)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_HEADER_OFFSET))(this, fileHash, hashAlgorithm);
		}

		::Mono::Security::ASN1* TimestampRequest(::Il2CppArray<::System::Byte>* signature)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMPREQUEST_OFFSET))(this, signature);
		}

		::System::Void ProcessTimestamp(::Il2CppArray<::System::Byte>* response)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_PROCESSTIMESTAMP_OFFSET))(this, response);
		}

		::Il2CppArray<::System::Byte>* Timestamp(::Il2CppArray<::System::Byte>* signature)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_OFFSET))(this, signature);
		}

		::System::Boolean Save(::System::String* fileName, ::Il2CppArray<::System::Byte>* asn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SAVE_OFFSET))(this, fileName, asn);
		}

		::System::Boolean Sign(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SIGN_OFFSET))(this, fileName);
		}

		::System::Boolean Timestamp_1(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_1_OFFSET))(this, fileName);
		}
	};
}
