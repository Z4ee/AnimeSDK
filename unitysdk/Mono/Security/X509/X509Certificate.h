#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_X509_X509CERTIFICATE_GETISSUERNAME_OFFSET UNITYSDK_OFFSET(0x177856E0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x17785700)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x177856F0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x17784F00)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_DSA_OFFSET UNITYSDK_OFFSET(0x1777B190)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x17784F90)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17784FB0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x17784FA0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x17785080)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x177854F0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RSA_OFFSET UNITYSDK_OFFSET(0x17785150)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x177855C0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x17785690)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x177856A0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDFROM_OFFSET UNITYSDK_OFFSET(0x177856B0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x177856C0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x177856D0)
#define MONO_SECURITY_X509_X509CERTIFICATE_PARSE_OFFSET UNITYSDK_OFFSET(0x17783EB0)
#define MONO_SECURITY_X509_X509CERTIFICATE_PEM_OFFSET UNITYSDK_OFFSET(0x17784D20)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_DSA_OFFSET UNITYSDK_OFFSET(0x17784F70)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_RSA_OFFSET UNITYSDK_OFFSET(0x177854D0)
#define MONO_SECURITY_X509_X509CERTIFICATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177857A0)
#define MONO_SECURITY_X509_X509CERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17779F00)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Certificate_TypeDefinitionIndex = 2256;

	class X509Certificate : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_encoding_error()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509Certificate_TypeDefinitionIndex)->GetStaticField(0x11470);
		}
		::Il2CppArray<::System::Byte>* signature; // 0x10
		::Mono::Security::ASN1* subject; // 0x18
		::Il2CppArray<::System::Byte>* m_signaturealgoparams; // 0x20
		::Il2CppArray<::System::Byte>* issuerUniqueID; // 0x28
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x30
		::Mono::Security::ASN1* decoder; // 0x38
		::Il2CppArray<::System::Byte>* m_keyalgoparams; // 0x40
		::Il2CppArray<::System::Byte>* m_publickey; // 0x48
		::System::String* m_signaturealgo; // 0x50
		::System::String* m_subject; // 0x58
		::Il2CppArray<::System::Byte>* subjectUniqueID; // 0x60
		::Mono::Security::ASN1* issuer; // 0x68
		::Il2CppArray<::System::Byte>* m_encodedcert; // 0x70
		::System::String* m_keyalgo; // 0x78
		::System::Security::Cryptography::RSA* _rsa; // 0x80
		::System::String* m_issuername; // 0x88
		::Il2CppArray<::System::Byte>* serialnumber; // 0x90
		::System::Security::Cryptography::DSA* _dsa; // 0x98
		::System::DateTime m_from; // 0xA0
		::System::DateTime m_until; // 0xA8
		::System::Int32 version; // 0xB0

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE__CTOR_OFFSET))(this, data);
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

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATUREALGORITHM_OFFSET))(this);
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
