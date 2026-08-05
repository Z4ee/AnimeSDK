#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Security::Cryptography { class RSAManaged_KeyGeneratedEventHandler; }
namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1F50B3D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1F50A130)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F509380)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1F50A900)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F50AAE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F509310)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1F5098E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x1F50A860)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1F50BAF0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F50A020)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1F509F90)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1F50A060)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F50A0F0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_USEKEYBLINDING_OFFSET UNITYSDK_OFFSET(0x1F50BAD0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F50AE50)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x1F50B450)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_SET_USEKEYBLINDING_OFFSET UNITYSDK_OFFSET(0x1F50BAE0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1F50B4D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F509270)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F509260)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_TypeDefinitionIndex = 2467;

	class RSAManaged : public ::System::Security::Cryptography::RSA
	{
	public:
		// static const ::System::Int32 defaultKeySize = 0x400; // 0x0
		::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated; // 0x20
		::Mono::Math::BigInteger* d; // 0x28
		::Mono::Math::BigInteger* q; // 0x30
		::Mono::Math::BigInteger* dp; // 0x38
		::Mono::Math::BigInteger* dq; // 0x40
		::Mono::Math::BigInteger* n; // 0x48
		::Mono::Math::BigInteger* qInv; // 0x50
		::Mono::Math::BigInteger* p; // 0x58
		::Mono::Math::BigInteger* e; // 0x60
		::System::Boolean keyBlinding; // 0x68
		::System::Boolean m_disposed; // 0x69
		::System::Boolean isCRTpossible; // 0x6A
		::System::Boolean keypairGenerated; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 keySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED__CTOR_1_OFFSET))(this, keySize);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DECRYPTVALUE_OFFSET))(this, rgb);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ENCRYPTVALUE_OFFSET))(this, rgb);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, value);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, value);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}

		::System::Boolean get_UseKeyBlinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_USEKEYBLINDING_OFFSET))(this);
		}

		::System::Void set_UseKeyBlinding(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_SET_USEKEYBLINDING_OFFSET))(this, value);
		}

		::System::Boolean get_IsCrtPossible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GET_ISCRTPOSSIBLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger* value, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_GETPADDEDVALUE_OFFSET))(this, value, length);
		}
	};
}
