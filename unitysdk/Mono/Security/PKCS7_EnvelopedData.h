#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_ContentInfo; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GETASN1_OFFSET UNITYSDK_OFFSET(0x1F8E5D50)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F8E5ED0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1F8E5D10)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1F8E5D90)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1F8E5DB0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F8E5DA0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_RECIPIENTINFOS_OFFSET UNITYSDK_OFFSET(0x1F8E5D00)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F8E5EB0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F8E5EC0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E5790)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8E57F0)
#define MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5640)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_EnvelopedData_TypeDefinitionIndex = 2278;

	class PKCS7_EnvelopedData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _encrypted; // 0x10
		::Mono::Security::PKCS7_ContentInfo* _encryptionAlgorithm; // 0x18
		::System::Collections::ArrayList* _recipientInfos; // 0x20
		::Mono::Security::PKCS7_ContentInfo* _content; // 0x28
		::System::Byte _version; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA__CTOR_2_OFFSET))(this, asn1);
		}

		::System::Collections::ArrayList* get_RecipientInfos()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_RECIPIENTINFOS_OFFSET))(this);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* get_ContentInfo()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_CONTENTINFO_OFFSET))(this);
		}

		::Mono::Security::PKCS7_ContentInfo* get_EncryptionAlgorithm()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_EncryptedContent()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_ENCRYPTEDCONTENT_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_SET_VERSION_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENVELOPEDDATA_GETBYTES_OFFSET))(this);
		}
	};
}
