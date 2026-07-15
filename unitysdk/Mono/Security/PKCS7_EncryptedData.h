#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security { class PKCS7_ContentInfo; }

#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1B64FD00)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x1B64FCF0)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B64F950)
#define MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64F940)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_EncryptedData_TypeDefinitionIndex = 2255;

	class PKCS7_EncryptedData : public ::System::Object
	{
	public:
		::Mono::Security::PKCS7_ContentInfo* _encryptionAlgorithm; // 0x10
		::Il2CppArray<::System::Byte>* _encrypted; // 0x18
		::Mono::Security::PKCS7_ContentInfo* _content; // 0x20
		::System::Byte _version; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA__CTOR_1_OFFSET))(this, a1);
		}

		::Mono::Security::PKCS7_ContentInfo* get_EncryptionAlgorithm()
		{
			return ((::Mono::Security::PKCS7_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_EncryptedContent()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET))(this);
		}
	};
}
