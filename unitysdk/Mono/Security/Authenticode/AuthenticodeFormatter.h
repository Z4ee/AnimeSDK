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

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D35F310)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D35F510)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x1D35F0F0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D35F110)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_CRL_OFFSET UNITYSDK_OFFSET(0x1D35F120)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D35F2D0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1D35F130)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_RSA_OFFSET UNITYSDK_OFFSET(0x1D35F290)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_TIMESTAMPURL_OFFSET UNITYSDK_OFFSET(0x1D35F2B0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1D35F2F0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_HEADER_OFFSET UNITYSDK_OFFSET(0x1D35FD70)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_OPUS_OFFSET UNITYSDK_OFFSET(0x1D35F7E0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_PROCESSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D360740)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SAVE_OFFSET UNITYSDK_OFFSET(0x1D360D70)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x1D35F100)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D35F2E0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1D35F180)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_RSA_OFFSET UNITYSDK_OFFSET(0x1D35F2A0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_TIMESTAMPURL_OFFSET UNITYSDK_OFFSET(0x1D35F2C0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SET_URL_OFFSET UNITYSDK_OFFSET(0x1D35F300)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_SIGN_OFFSET UNITYSDK_OFFSET(0x1D3611E0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMPREQUEST_OFFSET UNITYSDK_OFFSET(0x1D3605B0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1D361610)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D360AA0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D361FA0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35EF30)

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
		::Mono::Security::PKCS7_SignedData* pkcs7; // 0x38
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x40
		::Mono::Security::ASN1* authenticode; // 0x48
		::System::String* hash; // 0x50
		::System::Uri* timestamp; // 0x58
		::System::Uri* url; // 0x60
		::System::Collections::ArrayList* crls; // 0x68
		::System::String* description; // 0x70
		::System::Security::Cryptography::RSA* rsa; // 0x78
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
