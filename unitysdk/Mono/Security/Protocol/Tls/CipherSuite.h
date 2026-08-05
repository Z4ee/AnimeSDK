#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ContentType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HashAlgorithmType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeyedHashAlgorithm; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEDECRYPTIONCIPHER_OFFSET UNITYSDK_OFFSET(0x1F4C78F0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEENCRYPTIONCIPHER_OFFSET UNITYSDK_OFFSET(0x1F4C7380)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F4C6EF0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x1F4C8280)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_DECRYPTRECORD_OFFSET UNITYSDK_OFFSET(0x1F4C8060)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_ENCRYPTRECORD_OFFSET UNITYSDK_OFFSET(0x1F4C7E60)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_EXPAND_OFFSET UNITYSDK_OFFSET(0x1F4C8700)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CIPHERALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1F4C6E80)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CIPHERMODE_OFFSET UNITYSDK_OFFSET(0x1F4C6F90)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CLIENTHMAC_OFFSET UNITYSDK_OFFSET(0x1F4C6E60)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CODE_OFFSET UNITYSDK_OFFSET(0x1F4C6FA0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F4C7020)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_DECRYPTIONCIPHER_OFFSET UNITYSDK_OFFSET(0x1F4C6E50)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EFFECTIVEKEYBITS_OFFSET UNITYSDK_OFFSET(0x1F4C7000)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_ENCRYPTIONCIPHER_OFFSET UNITYSDK_OFFSET(0x1F4C6E40)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EXCHANGEALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1F4C6F80)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EXPANDEDKEYMATERIALSIZE_OFFSET UNITYSDK_OFFSET(0x1F4C6FF0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x1F4C6E90)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHALGORITHMTYPE_OFFSET UNITYSDK_OFFSET(0x1F4C6F50)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x1F4C6F60)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_ISEXPORTABLE_OFFSET UNITYSDK_OFFSET(0x1F4C6FC0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_IVSIZE_OFFSET UNITYSDK_OFFSET(0x1F4C7010)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_KEYBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1F4C6FE0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_KEYMATERIALSIZE_OFFSET UNITYSDK_OFFSET(0x1F4C6FD0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F4C6FB0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_SERVERHMAC_OFFSET UNITYSDK_OFFSET(0x1F4C6E70)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_INITIALIZECIPHER_OFFSET UNITYSDK_OFFSET(0x1F4C7360)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_PRF_OFFSET UNITYSDK_OFFSET(0x1F4C83A0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1F4C7030)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1F4C71B0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_WRITE_OFFSET UNITYSDK_OFFSET(0x1F4C7100)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C8B70)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C7040)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CipherSuite_TypeDefinitionIndex = 2347;

	class CipherSuite : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CipherSuite_TypeDefinitionIndex)->GetStaticField(0x22F0);
		}
		::Mono::Security::Protocol::Tls::Context* context; // 0x10
		::System::String* name; // 0x18
		::System::Security::Cryptography::KeyedHashAlgorithm* serverHMAC; // 0x20
		::System::Security::Cryptography::SymmetricAlgorithm* encryptionAlgorithm; // 0x28
		::System::Security::Cryptography::SymmetricAlgorithm* decryptionAlgorithm; // 0x30
		::System::Security::Cryptography::KeyedHashAlgorithm* clientHMAC; // 0x38
		::System::Security::Cryptography::ICryptoTransform* decryptionCipher; // 0x40
		::System::Security::Cryptography::ICryptoTransform* encryptionCipher; // 0x48
		::System::Security::Cryptography::CipherMode cipherMode; // 0x50
		::System::Byte keyMaterialSize; // 0x54
		::System::Byte expandedKeyMaterialSize; // 0x55
		::System::Int16 code; // 0x56
		::System::Byte ivSize; // 0x58
		::System::Byte blockSize; // 0x59
		::System::Boolean isExportable; // 0x5A
		::Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeAlgorithmType; // 0x5C
		::Mono::Security::Protocol::Tls::HashAlgorithmType hashAlgorithmType; // 0x60
		::System::Int16 effectiveKeyBits; // 0x64
		::Mono::Security::Protocol::Tls::CipherAlgorithmType cipherAlgorithmType; // 0x68
		::System::Int32 keyBlockSize; // 0x6C

		::System::Void _ctor(::System::Int16 code, ::System::String* name, ::Mono::Security::Protocol::Tls::CipherAlgorithmType cipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType hashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeAlgorithmType, ::System::Boolean exportable, ::System::Boolean blockMode, ::System::Byte keyMaterialSize, ::System::Byte expandedKeyMaterialSize, ::System::Int16 effectiveKeyBits, ::System::Byte ivSize, ::System::Byte blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::String*, ::Mono::Security::Protocol::Tls::CipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType, ::System::Boolean, ::System::Boolean, ::System::Byte, ::System::Byte, ::System::Int16, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE__CTOR_OFFSET))(this, code, name, cipherAlgorithmType, hashAlgorithmType, exchangeAlgorithmType, exportable, blockMode, keyMaterialSize, expandedKeyMaterialSize, effectiveKeyBits, ivSize, blockSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE__CCTOR_OFFSET))();
		}

		::System::Security::Cryptography::ICryptoTransform* get_EncryptionCipher()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_ENCRYPTIONCIPHER_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* get_DecryptionCipher()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_DECRYPTIONCIPHER_OFFSET))(this);
		}

		::System::Security::Cryptography::KeyedHashAlgorithm* get_ClientHMAC()
		{
			return ((::System::Security::Cryptography::KeyedHashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CLIENTHMAC_OFFSET))(this);
		}

		::System::Security::Cryptography::KeyedHashAlgorithm* get_ServerHMAC()
		{
			return ((::System::Security::Cryptography::KeyedHashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_SERVERHMAC_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::CipherAlgorithmType get_CipherAlgorithmType()
		{
			return ((::Mono::Security::Protocol::Tls::CipherAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CIPHERALGORITHMTYPE_OFFSET))(this);
		}

		::System::String* get_HashAlgorithmName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHALGORITHMNAME_OFFSET))(this);
		}

		::System::Security::Cryptography::HashAlgorithm* CreateHashAlgorithm()
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEHASHALGORITHM_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::HashAlgorithmType get_HashAlgorithmType()
		{
			return ((::Mono::Security::Protocol::Tls::HashAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHALGORITHMTYPE_OFFSET))(this);
		}

		::System::Int32 get_HashSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_HASHSIZE_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::ExchangeAlgorithmType get_ExchangeAlgorithmType()
		{
			return ((::Mono::Security::Protocol::Tls::ExchangeAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EXCHANGEALGORITHMTYPE_OFFSET))(this);
		}

		::System::Security::Cryptography::CipherMode get_CipherMode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CIPHERMODE_OFFSET))(this);
		}

		::System::Int16 get_Code()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CODE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsExportable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_ISEXPORTABLE_OFFSET))(this);
		}

		::System::Byte get_KeyMaterialSize()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_KEYMATERIALSIZE_OFFSET))(this);
		}

		::System::Int32 get_KeyBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_KEYBLOCKSIZE_OFFSET))(this);
		}

		::System::Byte get_ExpandedKeyMaterialSize()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EXPANDEDKEYMATERIALSIZE_OFFSET))(this);
		}

		::System::Int16 get_EffectiveKeyBits()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_EFFECTIVEKEYBITS_OFFSET))(this);
		}

		::System::Byte get_IvSize()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_IVSIZE_OFFSET))(this);
		}

		::Mono::Security::Protocol::Tls::Context* get_Context()
		{
			return ((::Mono::Security::Protocol::Tls::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Mono::Security::Protocol::Tls::Context* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_WRITE_OFFSET))(this, array, offset, value);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_WRITE_1_OFFSET))(this, array, offset, value);
		}

		::System::Void InitializeCipher()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_INITIALIZECIPHER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* EncryptRecord(::Il2CppArray<::System::Byte>* fragment, ::Il2CppArray<::System::Byte>* mac)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_ENCRYPTRECORD_OFFSET))(this, fragment, mac);
		}

		::System::Void DecryptRecord(::Il2CppArray<::System::Byte>* fragment, ::Il2CppArray<::System::Byte>*& dcrFragment, ::Il2CppArray<::System::Byte>*& dcrMAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_DECRYPTRECORD_OFFSET))(this, fragment, dcrFragment, dcrMAC);
		}

		::Il2CppArray<::System::Byte>* CreatePremasterSecret()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEPREMASTERSECRET_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* PRF(::Il2CppArray<::System::Byte>* secret, ::System::String* label, ::Il2CppArray<::System::Byte>* data, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_PRF_OFFSET))(this, secret, label, data, length);
		}

		::Il2CppArray<::System::Byte>* Expand(::System::Security::Cryptography::HashAlgorithm* hash, ::Il2CppArray<::System::Byte>* secret, ::Il2CppArray<::System::Byte>* seed, ::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_EXPAND_OFFSET))(this, hash, secret, seed, length);
		}

		::System::Void createEncryptionCipher()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEENCRYPTIONCIPHER_OFFSET))(this);
		}

		::System::Void createDecryptionCipher()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITE_CREATEDECRYPTIONCIPHER_OFFSET))(this);
		}
	};
}
