#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/DHKeyGeneration.h"
#include "unitysdk/Mono/Security/Cryptography/DHParameters.h"
#include "unitysdk/Mono/Security/Cryptography/DiffieHellman.h"

namespace Mono::Math { class BigInteger; }
namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1E1E1180)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_DECRYPTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1E1E1260)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E1E13E0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E1E15E0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E1E17A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1E1E0980)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E1E1390)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E1E13D0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E1E1660)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1E0C40)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E1810)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E08B0)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E1E0F90)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E1E1090)
#define MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0750)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DiffieHellmanManaged_TypeDefinitionIndex = 2454;

	class DiffieHellmanManaged : public ::Mono::Security::Cryptography::DiffieHellman
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_m_OAKLEY1536()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DiffieHellmanManaged_TypeDefinitionIndex)->GetStaticField(0x24B0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_m_OAKLEY768()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DiffieHellmanManaged_TypeDefinitionIndex)->GetStaticField(0x24B8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_m_OAKLEY1024()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DiffieHellmanManaged_TypeDefinitionIndex)->GetStaticField(0x24C0);
		}
		::Mono::Math::BigInteger* m_P; // 0x20
		::Mono::Math::BigInteger* m_G; // 0x28
		::Mono::Math::BigInteger* m_X; // 0x30
		::System::Boolean m_Disposed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 bitLength, ::System::Int32 l, ::Mono::Security::Cryptography::DHKeyGeneration method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Mono::Security::Cryptography::DHKeyGeneration))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_1_OFFSET))(this, bitLength, l, method);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* p, ::Il2CppArray<::System::Byte>* g, ::Il2CppArray<::System::Byte>* x)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_2_OFFSET))(this, p, g, x);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* p, ::Il2CppArray<::System::Byte>* g, ::System::Int32 l)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CTOR_3_OFFSET))(this, p, g, l);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED__CCTOR_OFFSET))();
		}

		::System::Void Initialize(::Mono::Math::BigInteger* p, ::Mono::Math::BigInteger* g, ::Mono::Math::BigInteger* x, ::System::Int32 secretLen, ::System::Boolean checkInput)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_INITIALIZE_OFFSET))(this, p, g, x, secretLen, checkInput);
		}

		::Il2CppArray<::System::Byte>* CreateKeyExchange()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_CREATEKEYEXCHANGE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DecryptKeyExchange(::Il2CppArray<::System::Byte>* keyEx)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_DECRYPTKEYEXCHANGE_OFFSET))(this, keyEx);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::Mono::Security::Cryptography::DHParameters ExportParameters(::System::Boolean includePrivateParameters)
		{
			return ((::Mono::Security::Cryptography::DHParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_EXPORTPARAMETERS_OFFSET))(this, includePrivateParameters);
		}

		::System::Void ImportParameters(::Mono::Security::Cryptography::DHParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DHParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_IMPORTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void GenerateKey(::System::Int32 bitlen, ::Mono::Security::Cryptography::DHKeyGeneration keygen, ::Mono::Math::BigInteger*& p, ::Mono::Math::BigInteger*& g)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Mono::Security::Cryptography::DHKeyGeneration, ::Mono::Math::BigInteger*&, ::Mono::Math::BigInteger*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DIFFIEHELLMANMANAGED_GENERATEKEY_OFFSET))(this, bitlen, keygen, p, g);
		}
	};
}
