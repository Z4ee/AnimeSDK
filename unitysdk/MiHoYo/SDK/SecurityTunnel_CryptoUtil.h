#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCDECRYPT_OFFSET UNITYSDK_OFFSET(0x1C6C40F0)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C6C3460)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSADECRYPT_OFFSET UNITYSDK_OFFSET(0x1C6C4440)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSAENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C6C37B0)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEDECODEIV_OFFSET UNITYSDK_OFFSET(0x1C6CF0C0)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEENCODEIV_OFFSET UNITYSDK_OFFSET(0x1C6CF050)
#define MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C4E40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_CryptoUtil_TypeDefinitionIndex = 46860;

	class SecurityTunnel_CryptoUtil : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::ICryptoTransform** StaticGet_decryptor()
		{
			return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_CryptoUtil_TypeDefinitionIndex)->GetStaticField(0x5C720);
		}
		static ::System::Security::Cryptography::ICryptoTransform** StaticGet_encryptor()
		{
			return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_CryptoUtil_TypeDefinitionIndex)->GetStaticField(0x5C728);
		}
		::Il2CppArray<::System::Byte>* decodeIV; // 0x10
		::Il2CppArray<::System::Byte>* key; // 0x18
		::Il2CppArray<::System::Byte>* encodeIV; // 0x20
		::System::Security::Cryptography::RijndaelManaged* rm; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateEncodeIV(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEENCODEIV_OFFSET))(this, a1);
		}

		::System::Void UpdateDecodeIV(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_UPDATEDECODEIV_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Byte>* RSAEncrypt(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSAENCRYPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* RSADecrypt(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_RSADECRYPT_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::Byte>* AesCbcEncrypt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCENCRYPT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* AesCbcDecrypt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_CRYPTOUTIL_AESCBCDECRYPT_OFFSET))(this, a1);
		}
	};
}
