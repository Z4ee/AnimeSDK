#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class DSAManaged_KeyGeneratedEventHandler; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x18568360)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET UNITYSDK_OFFSET(0x18567820)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185662B0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x185679F0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18566240)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x18567430)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET UNITYSDK_OFFSET(0x18566710)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET UNITYSDK_OFFSET(0x185666C0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x185678F0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x18567920)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x185678B0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18567F10)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x18567980)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x185683E0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x185661D0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_TypeDefinitionIndex = 79;

	class DSAManaged : public ::System::Security::Cryptography::DSA
	{
	public:
		::Mono::Math::BigInteger* y; // 0x20
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x28
		::Mono::Math::BigInteger* seed; // 0x30
		::Mono::Math::BigInteger* q; // 0x38
		::Mono::Math::BigInteger* g; // 0x40
		::Mono::Math::BigInteger* j; // 0x48
		::Mono::Math::BigInteger* x; // 0x50
		::Mono::Math::BigInteger* p; // 0x58
		::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x60
		::System::Boolean keypairGenerated; // 0x68
		::System::Boolean j_missing; // 0x69
		::System::Boolean m_disposed; // 0x6A
		::System::Int32 counter; // 0x6C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET))(this, a1);
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

		::System::Void add(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GenerateParams(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Random()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NormalizeArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, a1);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, a1);
		}
	};
}
