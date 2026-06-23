#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_X509_X509CERTIFICATE_CHECKSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E5CF4B0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1E5CF680)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E5CF750)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1E5CF690)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1E5CDDC0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_DSA_OFFSET UNITYSDK_OFFSET(0x1E5CDE50)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1E5CE140)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1E5CE150)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x1E5CEF00)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSELFSIGNED_OFFSET UNITYSDK_OFFSET(0x1E5CF530)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1E5CE3D0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E5CEF90)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E5CE3F0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E5CE3E0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1E5CE500)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x1E5CE7A0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RSA_OFFSET UNITYSDK_OFFSET(0x1E5CE600)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1E5CE8A0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E5CEDC0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E5CEDB0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E5CE9A0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1E5CEEC0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E5CF090)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDFROM_OFFSET UNITYSDK_OFFSET(0x1E5CEED0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x1E5CEEE0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E5CEEF0)
#define MONO_SECURITY_X509_X509CERTIFICATE_PARSE_OFFSET UNITYSDK_OFFSET(0x1E5CD1B0)
#define MONO_SECURITY_X509_X509CERTIFICATE_PEM_OFFSET UNITYSDK_OFFSET(0x1E5CDBD0)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_DSA_OFFSET UNITYSDK_OFFSET(0x1E5CE120)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_KEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E5CE4F0)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_RSA_OFFSET UNITYSDK_OFFSET(0x1E5CE780)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_1_OFFSET UNITYSDK_OFFSET(0x1E5CF220)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_2_OFFSET UNITYSDK_OFFSET(0x1E5CF390)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E5CF190)
#define MONO_SECURITY_X509_X509CERTIFICATE_WASCURRENT_OFFSET UNITYSDK_OFFSET(0x1E5CEF60)
#define MONO_SECURITY_X509_X509CERTIFICATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF7F0)
#define MONO_SECURITY_X509_X509CERTIFICATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CF6A0)
#define MONO_SECURITY_X509_X509CERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CDAB0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Certificate_TypeDefinitionIndex = 2296;

	class X509Certificate : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_encoding_error()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate_TypeDefinitionIndex)->GetStaticField(0x2430);
		}
		// static const ::System::String* OID_DSA; // 0x0
		// static const ::System::String* OID_RSA; // 0x0
		::System::String* m_keyalgo; // 0x10
		::Il2CppArray<::System::Byte>* subjectUniqueID; // 0x18
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x20
		::Il2CppArray<::System::Byte>* certhash; // 0x28
		::Mono::Security::ASN1* issuer; // 0x30
		::System::Security::Cryptography::DSA* _dsa; // 0x38
		::System::Security::Cryptography::RSA* _rsa; // 0x40
		::Mono::Security::ASN1* subject; // 0x48
		::Il2CppArray<::System::Byte>* serialnumber; // 0x50
		::Il2CppArray<::System::Byte>* m_signaturealgoparams; // 0x58
		::System::String* m_issuername; // 0x60
		::Il2CppArray<::System::Byte>* m_keyalgoparams; // 0x68
		::Il2CppArray<::System::Byte>* signature; // 0x70
		::Il2CppArray<::System::Byte>* m_encodedcert; // 0x78
		::System::String* m_subject; // 0x80
		::Il2CppArray<::System::Byte>* issuerUniqueID; // 0x88
		::System::String* m_signaturealgo; // 0x90
		::Il2CppArray<::System::Byte>* m_publickey; // 0x98
		::Mono::Security::ASN1* decoder; // 0xA0
		::System::Int32 version; // 0xA8
		::System::DateTime m_from; // 0xB0
		::System::DateTime m_until; // 0xB8

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE__CTOR_1_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE__CCTOR_OFFSET))();
		}

		::System::Void Parse(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_PARSE_OFFSET))(this, data);
		}

		::Il2CppArray<::System::Byte>* GetUnsignedBigInteger(::Il2CppArray<::System::Byte>* integer)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETUNSIGNEDBIGINTEGER_OFFSET))(this, integer);
		}

		::System::Security::Cryptography::DSA* get_DSA()
		{
			return ((::System::Security::Cryptography::DSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_DSA_OFFSET))(this);
		}

		::System::Void set_DSA(::System::Security::Cryptography::DSA* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_DSA_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return ((::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_EXTENSIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Hash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_HASH_OFFSET))(this);
		}

		::System::String* get_IssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERNAME_OFFSET))(this);
		}

		::System::String* get_KeyAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_KeyAlgorithmParameters()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHMPARAMETERS_OFFSET))(this);
		}

		::System::Void set_KeyAlgorithmParameters(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_KEYALGORITHMPARAMETERS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_PublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_PUBLICKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_RSA_OFFSET))(this);
		}

		::System::Void set_RSA(::System::Security::Cryptography::RSA* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_RSA_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_RawData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_RAWDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SERIALNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Signature()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATURE_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SignatureAlgorithmParameters()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHMPARAMETERS_OFFSET))(this);
		}

		::System::String* get_SubjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTNAME_OFFSET))(this);
		}

		::System::DateTime get_ValidFrom()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDFROM_OFFSET))(this);
		}

		::System::DateTime get_ValidUntil()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDUNTIL_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VERSION_OFFSET))(this);
		}

		::System::Boolean get_IsCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISCURRENT_OFFSET))(this);
		}

		::System::Boolean WasCurrent(::System::DateTime instant)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_WASCURRENT_OFFSET))(this, instant);
		}

		::Il2CppArray<::System::Byte>* get_IssuerUniqueIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERUNIQUEIDENTIFIER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectUniqueIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTUNIQUEIDENTIFIER_OFFSET))(this);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::DSA* dsa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::DSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET))(this, dsa);
		}

		::System::Boolean VerifySignature_1(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_1_OFFSET))(this, rsa);
		}

		::System::Boolean VerifySignature_2(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_2_OFFSET))(this, aa);
		}

		::System::Boolean CheckSignature(::Il2CppArray<::System::Byte>* hash, ::System::String* hashAlgorithm, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_CHECKSIGNATURE_OFFSET))(this, hash, hashAlgorithm, signature);
		}

		::System::Boolean get_IsSelfSigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSELFSIGNED_OFFSET))(this);
		}

		::Mono::Security::ASN1* GetIssuerName()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETISSUERNAME_OFFSET))(this);
		}

		::Mono::Security::ASN1* GetSubjectName()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETSUBJECTNAME_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::Il2CppArray<::System::Byte>* PEM(::System::String* type, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_PEM_OFFSET))(type, data);
		}
	};
}
