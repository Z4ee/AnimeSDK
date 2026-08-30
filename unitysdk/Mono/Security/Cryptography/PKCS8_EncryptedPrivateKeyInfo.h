#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x1BB24430)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BB24770)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTEDDATA_OFFSET UNITYSDK_OFFSET(0x1BB24780)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BB24990)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_SALT_OFFSET UNITYSDK_OFFSET(0x1BB24860)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB24420)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB24410)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_EncryptedPrivateKeyInfo_TypeDefinitionIndex = 2309;

	class PKCS8_EncryptedPrivateKeyInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _salt; // 0x10
		::System::String* _algorithm; // 0x18
		::Il2CppArray<::System::Byte>* _data; // 0x20
		::System::Int32 _iterations; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Algorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_EncryptedData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTEDDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Salt()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_SALT_OFFSET))(this);
		}

		::System::Int32 get_IterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_GET_ITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_ENCRYPTEDPRIVATEKEYINFO_DECODE_OFFSET))(this, a1);
		}
	};
}
