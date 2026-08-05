#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F50EA30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1F50E9B0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1F50E5E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_INITIALIZEPAD_OFFSET UNITYSDK_OFFSET(0x1F50E460)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F50E410)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F50EB50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F50E330)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslHandshakeHash_TypeDefinitionIndex = 2380;

	class SslHandshakeHash : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::Il2CppArray<::System::Byte>* secret; // 0x28
		::System::Security::Cryptography::HashAlgorithm* sha; // 0x30
		::Il2CppArray<::System::Byte>* outerPadSHA; // 0x38
		::Il2CppArray<::System::Byte>* outerPadMD5; // 0x40
		::System::Security::Cryptography::HashAlgorithm* md5; // 0x48
		::Il2CppArray<::System::Byte>* innerPadMD5; // 0x50
		::Il2CppArray<::System::Byte>* innerPadSHA; // 0x58
		::System::Boolean hashing; // 0x60

		::System::Void _ctor(::Il2CppArray<::System::Byte>* secret)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH__CTOR_OFFSET))(this, secret);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_INITIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_HASHFINAL_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* CreateSignature(::System::Security::Cryptography::RSA* rsa)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_CREATESIGNATURE_OFFSET))(this, rsa);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::RSA* rsa, ::Il2CppArray<::System::Byte>* rgbSignature)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_VERIFYSIGNATURE_OFFSET))(this, rsa, rgbSignature);
		}

		::System::Void initializePad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLHANDSHAKEHASH_INITIALIZEPAD_OFFSET))(this);
		}
	};
}
