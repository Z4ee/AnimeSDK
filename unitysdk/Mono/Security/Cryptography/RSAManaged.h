#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class RSAManaged_KeyGeneratedEventHandler; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16141680)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x16140A10)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x161419F0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x161415F0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16141A70)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 2299;

	class RSAManaged : public ::System::Security::Cryptography::RSA
	{
	public:
		::Mono::Math::BigInteger* dq; // 0x20
		::Mono::Math::BigInteger* q; // 0x28
		::Mono::Math::BigInteger* n; // 0x30
		::Mono::Math::BigInteger* p; // 0x38
		::Mono::Math::BigInteger* d; // 0x40
		::Mono::Math::BigInteger* dp; // 0x48
		::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x50
		::Mono::Math::BigInteger* e; // 0x58
		::Mono::Math::BigInteger* qInv; // 0x60
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

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger* value, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(this, value, length);
		}
	};
}
