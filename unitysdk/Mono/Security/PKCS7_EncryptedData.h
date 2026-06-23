#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_ContentInfo; }

#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GETASN1_OFFSET UNITYSDK_OFFSET(0x1E361A20)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E361B70)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1E361A10)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1E361A30)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1E361A50)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E361A40)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E361B50)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E361B60)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E361620)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E361680)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E361610)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_EncryptedData_TypeDefinitionIndex = 2277;

	class PKCS7_EncryptedData : public ::System::Object
	{
	public:
		::Mono::Security::PKCS7_ContentInfo* _content; // 0x10
		::Il2CppArray<::System::Byte>* _encrypted; // 0x18
		::Mono::Security::PKCS7_ContentInfo* _encryptionAlgorithm; // 0x20
		::System::Byte _version; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_2_OFFSET))(this, asn1);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* get_ContentInfo()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_CONTENTINFO_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* get_EncryptionAlgorithm()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_EncryptedContent()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_SET_VERSION_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GETBYTES_OFFSET))(this);
		}
	};
}
