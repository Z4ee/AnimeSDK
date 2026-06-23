#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E7C07B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1E7C0730)
#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1E7C0600)
#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7C05B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E7C08D0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0520)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD5SHA1_TypeDefinitionIndex = 2460;

	class MD5SHA1 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Security::Cryptography::HashAlgorithm* sha; // 0x28
		::System::Security::Cryptography::HashAlgorithm* md5; // 0x30
		::System::Boolean hashing; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_INITIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_HASHFINAL_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_CREATESIGNATURE_OFFSET))(this, rsa);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD5SHA1_VERIFYSIGNATURE_OFFSET))(this, rsa, rgbSignature);
		}
	};
}
