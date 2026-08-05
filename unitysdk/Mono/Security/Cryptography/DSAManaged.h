#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class DSAManaged_KeyGeneratedEventHandler; }
namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1C6BB030)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET UNITYSDK_OFFSET(0x1C6B9780)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1C6BA5A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6B83F0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C6B9C20)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C6B82A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1C6B9370)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C6B88F0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET UNITYSDK_OFFSET(0x1C6B88B0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C6B9AE0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6B9AB0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1C6B9AF0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1C6B98A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C6B9B50)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C6BA230)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1C6B9B90)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1C6BB0B0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1C6BAA50)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6B8210)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B8200)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_TypeDefinitionIndex = 78;

	class DSAManaged : public ::System::Security::Cryptography::DSA
	{
	public:
		::Mono::Math::BigInteger* seed; // 0x20
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x28
		::Mono::Math::BigInteger* q; // 0x30
		::Mono::Math::BigInteger* x; // 0x38
		::Mono::Math::BigInteger* y; // 0x40
		::Mono::Math::BigInteger* p; // 0x48
		::Mono::Math::BigInteger* j; // 0x50
		::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x58
		::Mono::Math::BigInteger* g; // 0x60
		::System::Boolean m_disposed; // 0x68
		::System::Boolean keypairGenerated; // 0x69
		::System::Boolean j_missing; // 0x6A
		::System::Int32 counter; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 dwKeySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_1_OFFSET))(this, dwKeySize);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void Generate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET))(this);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Void add(::Il2CppArray<::System::Byte>* a, ::Il2CppArray<::System::Byte>* b, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET))(this, a, b, value);
		}

		::System::Void GenerateParams(::System::Int32 keyLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET))(this, keyLength);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Random()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NormalizeArray(::Il2CppArray<::System::Byte>* array)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET))(this, array);
		}

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::Il2CppArray<::System::Byte>* rgbHash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_CREATESIGNATURE_OFFSET))(this, rgbHash);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* rgbHash, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET))(this, rgbHash, rgbSignature);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, value);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, value);
		}
	};
}
