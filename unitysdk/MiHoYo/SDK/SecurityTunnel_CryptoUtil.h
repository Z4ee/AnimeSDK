#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCDECRYPT_OFFSET UNITYSDK_OFFSET(0x1C55C480)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C55C110)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x1C55BB30)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C55B460)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEDECODEIV_OFFSET UNITYSDK_OFFSET(0x1C55B3F0)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEENCODEIV_OFFSET UNITYSDK_OFFSET(0x1C55B380)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55AF40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_CryptoUtil_TypeDefinitionIndex = 36787;

	class SecurityTunnel_CryptoUtil : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::ICryptoTransform** StaticGet_decryptor()
		{
			return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_CryptoUtil_TypeDefinitionIndex)->GetStaticField(0x28280);
		}
		static ::System::Security::Cryptography::ICryptoTransform** StaticGet_encryptor()
		{
			return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_CryptoUtil_TypeDefinitionIndex)->GetStaticField(0x28288);
		}
		::System::Security::Cryptography::RijndaelManaged* rm; // 0x10
		::Il2CppArray<::System::Byte>* decodeIV; // 0x18
		::Il2CppArray<::System::Byte>* key; // 0x20
		::Il2CppArray<::System::Byte>* encodeIV; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL__CTOR_OFFSET))(this, key, iv);
		}

		::System::Void UpdateEncodeIV(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEENCODEIV_OFFSET))(this, bytes);
		}

		::System::Void UpdateDecodeIV(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEDECODEIV_OFFSET))(this, bytes);
		}

		static ::Il2CppArray<::System::Byte>* RSAEncrypt(::System::String* key, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSAENCRYPT_OFFSET))(key, bytes);
		}

		static ::Il2CppArray<::System::Byte>* RSADecrypt(::System::String* key, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSADECRYPT_OFFSET))(key, bytes);
		}

		::Il2CppArray<::System::Byte>* AesCbcEncrypt(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCENCRYPT_OFFSET))(this, bytes);
		}

		::Il2CppArray<::System::Byte>* AesCbcDecrypt(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCDECRYPT_OFFSET))(this, bytes);
		}
	};
}
