#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET UNITYSDK_OFFSET(0x1EF54640)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1EF560F0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMOID_OFFSET UNITYSDK_OFFSET(0x1EF56DA0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x1EF550E0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_V15_OFFSET UNITYSDK_OFFSET(0x1EF556C0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x1EF559F0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET UNITYSDK_OFFSET(0x1EF54C00)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_V15_OFFSET UNITYSDK_OFFSET(0x1EF55490)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET UNITYSDK_OFFSET(0x1EF54770)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_HASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x1EF56A90)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET UNITYSDK_OFFSET(0x1EF549E0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET UNITYSDK_OFFSET(0x1EF54910)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET UNITYSDK_OFFSET(0x1EF54F20)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET UNITYSDK_OFFSET(0x1EF54A60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET UNITYSDK_OFFSET(0x1EF54B70)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET UNITYSDK_OFFSET(0x1EF54B40)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSASP1_OFFSET UNITYSDK_OFFSET(0x1EF54BA0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET UNITYSDK_OFFSET(0x1EF54BD0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_SIGN_V15_1_OFFSET UNITYSDK_OFFSET(0x1EF55FE0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_SIGN_V15_OFFSET UNITYSDK_OFFSET(0x1EF558E0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET UNITYSDK_OFFSET(0x1EF56970)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_2_OFFSET UNITYSDK_OFFSET(0x1EF56680)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x1EF56600)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET UNITYSDK_OFFSET(0x1EF546B0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF56E00)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF54630)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_TypeDefinitionIndex = 2461;

	class PKCS1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x2310);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x2318);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x2320);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_TypeDefinitionIndex)->GetStaticField(0x2328);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1__CCTOR_OFFSET))();
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_COMPARE_OFFSET))(array1, array2);
		}

		static ::Il2CppArray<::System::Byte>* xor(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_XOR_OFFSET))(array1, array2);
		}

		static ::Il2CppArray<::System::Byte>* GetEmptyHash(::System::Security::Cryptography::HashAlgorithm* hash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_GETEMPTYHASH_OFFSET))(hash);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP(::System::Int32 x, ::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_OFFSET))(x, size);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP_1(::Il2CppArray<::System::Byte>* x, ::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_I2OSP_1_OFFSET))(x, size);
		}

		static ::Il2CppArray<::System::Byte>* OS2IP(::Il2CppArray<::System::Byte>* x)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_OS2IP_OFFSET))(x);
		}

		static ::Il2CppArray<::System::Byte>* RSAEP(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* m)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAEP_OFFSET))(rsa, m);
		}

		static ::Il2CppArray<::System::Byte>* RSADP(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* c)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSADP_OFFSET))(rsa, c);
		}

		static ::Il2CppArray<::System::Byte>* RSASP1(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* m)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSASP1_OFFSET))(rsa, m);
		}

		static ::Il2CppArray<::System::Byte>* RSAVP1(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_RSAVP1_OFFSET))(rsa, s);
		}

		static ::Il2CppArray<::System::Byte>* Encrypt_OAEP(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::System::Security::Cryptography::RandomNumberGenerator* rng, ::Il2CppArray<::System::Byte>* M)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_OAEP_OFFSET))(rsa, hash, rng, M);
		}

		static ::Il2CppArray<::System::Byte>* Decrypt_OAEP(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* C)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_OAEP_OFFSET))(rsa, hash, C);
		}

		static ::Il2CppArray<::System::Byte>* Encrypt_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::RandomNumberGenerator* rng, ::Il2CppArray<::System::Byte>* M)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCRYPT_V15_OFFSET))(rsa, rng, M);
		}

		static ::Il2CppArray<::System::Byte>* Decrypt_v15(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* C)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_DECRYPT_V15_OFFSET))(rsa, C);
		}

		static ::Il2CppArray<::System::Byte>* Sign_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* hashValue)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_SIGN_V15_OFFSET))(rsa, hash, hashValue);
		}

		static ::Il2CppArray<::System::Byte>* Sign_v15_1(::System::Security::Cryptography::RSA* rsa, ::System::String* hashName, ::Il2CppArray<::System::Byte>* hashValue)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_SIGN_V15_1_OFFSET))(rsa, hashName, hashValue);
		}

		static ::System::Boolean Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* hashValue, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_OFFSET))(rsa, hash, hashValue, signature);
		}

		static ::System::Boolean Verify_v15_1(::System::Security::Cryptography::RSA* rsa, ::System::String* hashName, ::Il2CppArray<::System::Byte>* hashValue, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_1_OFFSET))(rsa, hashName, hashValue, signature);
		}

		static ::System::Boolean Verify_v15_2(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* hashValue, ::Il2CppArray<::System::Byte>* signature, ::System::Boolean tryNonStandardEncoding)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_VERIFY_V15_2_OFFSET))(rsa, hash, hashValue, signature, tryNonStandardEncoding);
		}

		static ::Il2CppArray<::System::Byte>* Encode_v15(::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* hashValue, ::System::Int32 emLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_ENCODE_V15_OFFSET))(hash, hashValue, emLength);
		}

		static ::Il2CppArray<::System::Byte>* MGF1(::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* mgfSeed, ::System::Int32 maskLen)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_MGF1_OFFSET))(hash, mgfSeed, maskLen);
		}

		static ::System::String* HashNameFromOid(::System::String* oid, ::System::Boolean throwOnError)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_HASHNAMEFROMOID_OFFSET))(oid, throwOnError);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromOid(::System::String* oid)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMOID_OFFSET))(oid);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* name)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_CREATEFROMNAME_OFFSET))(name);
		}
	};
}
