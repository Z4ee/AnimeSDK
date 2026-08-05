#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/KeyedHashAlgorithm.h"

namespace System::Security::Cryptography { class HashAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1FAE14B0)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1FAE1E40)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1FAE1CA0)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEPAD_OFFSET UNITYSDK_OFFSET(0x1FAE1750)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAE1AC0)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1FAE15C0)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAE1B00)
#define MONO_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE1900)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int HMAC_TypeDefinitionIndex = 2473;

	class HMAC : public ::System::Security::Cryptography::KeyedHashAlgorithm
	{
	public:
		::Il2CppArray<::System::Byte>* outerPad; // 0x30
		::Il2CppArray<::System::Byte>* innerPad; // 0x38
		::System::Security::Cryptography::HashAlgorithm* hash; // 0x40
		::System::Boolean hashing; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::HashAlgorithm* ha, ::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_1_OFFSET))(this, ha, rgbKey);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::System::Void initializePad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEPAD_OFFSET))(this);
		}
	};
}
