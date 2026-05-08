#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/StrongName_StrongNameOptions.h"
#include "unitysdk/System/Configuration/Assemblies/AssemblyHashAlgorithm.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class StrongName_StrongNameSignature; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_STRONGNAME_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1AF58960)
#define MONO_SECURITY_STRONGNAME_GET_CANSIGN_OFFSET UNITYSDK_OFFSET(0x1AF57E00)
#define MONO_SECURITY_STRONGNAME_GET_PUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1AF585D0)
#define MONO_SECURITY_STRONGNAME_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1AF58030)
#define MONO_SECURITY_STRONGNAME_GET_RSA_OFFSET UNITYSDK_OFFSET(0x1AF57FD0)
#define MONO_SECURITY_STRONGNAME_GET_TOKENALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AF58820)
#define MONO_SECURITY_STRONGNAME_HASH_OFFSET UNITYSDK_OFFSET(0x1AF59490)
#define MONO_SECURITY_STRONGNAME_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x1AF57DF0)
#define MONO_SECURITY_STRONGNAME_RVATOPOSITION_OFFSET UNITYSDK_OFFSET(0x1AF589D0)
#define MONO_SECURITY_STRONGNAME_SET_RSA_OFFSET UNITYSDK_OFFSET(0x1AF57D70)
#define MONO_SECURITY_STRONGNAME_SET_TOKENALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AF58870)
#define MONO_SECURITY_STRONGNAME_SIGN_OFFSET UNITYSDK_OFFSET(0x1AF59540)
#define MONO_SECURITY_STRONGNAME_STRONGHASH_OFFSET UNITYSDK_OFFSET(0x1AF58AA0)
#define MONO_SECURITY_STRONGNAME_VERIFY_1_OFFSET UNITYSDK_OFFSET(0x1AF59B50)
#define MONO_SECURITY_STRONGNAME_VERIFY_2_OFFSET UNITYSDK_OFFSET(0x1AF59C80)
#define MONO_SECURITY_STRONGNAME_VERIFY_OFFSET UNITYSDK_OFFSET(0x1AF59A20)
#define MONO_SECURITY_STRONGNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF57B40)
#define MONO_SECURITY_STRONGNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF57B90)
#define MONO_SECURITY_STRONGNAME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF57D80)
#define MONO_SECURITY_STRONGNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF57B30)

namespace Mono::Security
{
	inline static constexpr unsigned int StrongName_TypeDefinitionIndex = 2284;

	class StrongName : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* publicKey; // 0x10
		::Il2CppArray<::System::Byte>* keyToken; // 0x18
		::System::Security::Cryptography::RSA* rsa; // 0x20
		::System::String* tokenAlgorithm; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 keySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME__CTOR_1_OFFSET))(this, keySize);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME__CTOR_2_OFFSET))(this, data);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME__CTOR_3_OFFSET))(this, rsa);
		}

		::System::Void InvalidateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_INVALIDATECACHE_OFFSET))(this);
		}

		::System::Boolean get_CanSign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GET_CANSIGN_OFFSET))(this);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GET_RSA_OFFSET))(this);
		}

		::System::Void set_RSA(::System::Security::Cryptography::RSA* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_SET_RSA_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_PublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GET_PUBLICKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_PublicKeyToken()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GET_PUBLICKEYTOKEN_OFFSET))(this);
		}

		::System::String* get_TokenAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GET_TOKENALGORITHM_OFFSET))(this);
		}

		::System::Void set_TokenAlgorithm(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_SET_TOKENALGORITHM_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_GETBYTES_OFFSET))(this);
		}

		::System::UInt32 RVAtoPosition(::System::UInt32 r, ::System::Int32 sections, ::Il2CppArray<::System::Byte>* headers)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_RVATOPOSITION_OFFSET))(this, r, sections, headers);
		}

		::Mono::Security::StrongName_StrongNameSignature* StrongHash(::System::IO::Stream* stream, ::Mono::Security::StrongName_StrongNameOptions options)
		{
			return ((::Mono::Security::StrongName_StrongNameSignature*(*)(::PVOID, ::System::IO::Stream*, ::Mono::Security::StrongName_StrongNameOptions))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_STRONGHASH_OFFSET))(this, stream, options);
		}

		::Il2CppArray<::System::Byte>* Hash(::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_HASH_OFFSET))(this, fileName);
		}

		::System::Boolean Sign(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_SIGN_OFFSET))(this, fileName);
		}

		::System::Boolean Verify(::System::String* fileName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_VERIFY_OFFSET))(this, fileName);
		}

		::System::Boolean Verify_1(::System::IO::Stream* stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_VERIFY_1_OFFSET))(this, stream);
		}

		static ::System::Boolean Verify_2(::System::Security::Cryptography::RSA* rsa, ::System::Configuration::Assemblies::AssemblyHashAlgorithm algorithm, ::Il2CppArray<::System::Byte>* hash, ::Il2CppArray<::System::Byte>* signature)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Configuration::Assemblies::AssemblyHashAlgorithm, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_STRONGNAME_VERIFY_2_OFFSET))(rsa, algorithm, hash, signature);
		}
	};
}
