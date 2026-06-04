#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class RSAManaged_KeyGeneratedEventHandler; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x185289E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x185281B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x18528D50)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x18528950)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18528DD0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 2300;

	class RSAManaged : public ::System::Security::Cryptography::RSA
	{
	public:
		::Mono::Math::BigInteger* n; // 0x20
		::Mono::Math::BigInteger* d; // 0x28
		::Mono::Math::BigInteger* qInv; // 0x30
		::Mono::Math::BigInteger* dp; // 0x38
		::Mono::Math::BigInteger* e; // 0x40
		::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x48
		::Mono::Math::BigInteger* q; // 0x50
		::Mono::Math::BigInteger* dq; // 0x58
		::Mono::Math::BigInteger* p; // 0x60
		::System::Boolean keypairGenerated; // 0x68
		::System::Boolean m_disposed; // 0x69
		::System::Boolean isCRTpossible; // 0x6A

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(this, a1, a2);
		}
	};
}
