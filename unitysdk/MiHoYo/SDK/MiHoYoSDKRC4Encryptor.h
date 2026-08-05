#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKRC4Encryptor_EncoderMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_BYTETOHEX_OFFSET UNITYSDK_OFFSET(0x1C2D8F10)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x1C2D9110)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_2_OFFSET UNITYSDK_OFFSET(0x1C2D9450)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_3_OFFSET UNITYSDK_OFFSET(0x1C2D9200)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1C2D9100)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_1_OFFSET UNITYSDK_OFFSET(0x1C2D8A20)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_2_OFFSET UNITYSDK_OFFSET(0x1C2D9440)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_3_OFFSET UNITYSDK_OFFSET(0x1C2D8C70)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1C2D8A10)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C2D9460)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODERMODE_OFFSET UNITYSDK_OFFSET(0x1C2D88D0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1C2D88B0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2D8890)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_RC4_OFFSET UNITYSDK_OFFSET(0x1C2D88F0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_HEXTOBYTE_OFFSET UNITYSDK_OFFSET(0x1C2D9210)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODERMODE_OFFSET UNITYSDK_OFFSET(0x1C2D88E0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1C2D88C0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1C2D88A0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SUBCONVERTTOBASE64_OFFSET UNITYSDK_OFFSET(0x1C2D9660)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D87B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRC4Encryptor_TypeDefinitionIndex = 37525;

	class MiHoYoSDKRC4Encryptor : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::Text::Encoding* _encoding_k__BackingField; // 0x18
		::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode _encoderMode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_KEY_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODING_OFFSET))(this);
		}

		::System::Void set_encoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODING_OFFSET))(this, value);
		}

		::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode get_encoderMode()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODERMODE_OFFSET))(this);
		}

		::System::Void set_encoderMode(::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODERMODE_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor* get_RC4()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKRC4Encryptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_RC4_OFFSET))();
		}

		::System::String* Encrypt(::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_OFFSET))(this, data);
		}

		::System::String* Encrypt_1(::System::String* data, ::System::String* key, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode em)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_1_OFFSET))(this, data, key, em);
		}

		::System::String* Decrypt(::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_OFFSET))(this, data);
		}

		::System::String* Decrypt_1(::System::String* data, ::System::String* key, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode em)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_1_OFFSET))(this, data, key, em);
		}

		::System::String* Encrypt_2(::System::String* data, ::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_2_OFFSET))(this, data, key);
		}

		::System::String* Decrypt_2(::System::String* data, ::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_2_OFFSET))(this, data, key);
		}

		::Il2CppArray<::System::Byte>* HexToByte(::System::String* hex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_HEXTOBYTE_OFFSET))(this, hex);
		}

		::System::String* ByteToHex(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_BYTETOHEX_OFFSET))(this, bytes);
		}

		::Il2CppArray<::System::Byte>* Encrypt_3(::Il2CppArray<::System::Byte>* data, ::System::String* key)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_3_OFFSET))(this, data, key);
		}

		::Il2CppArray<::System::Byte>* Decrypt_3(::Il2CppArray<::System::Byte>* data, ::System::String* key)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_3_OFFSET))(this, data, key);
		}

		::Il2CppArray<::System::Byte>* GetKey(::Il2CppArray<::System::Byte>* pass, ::System::Int32 kLen)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GETKEY_OFFSET))(this, pass, kLen);
		}

		::System::String* SubConvertToBase64(::Il2CppArray<::System::Byte>* data, ::System::Int32 bufferSizeInbytesDiv3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SUBCONVERTTOBASE64_OFFSET))(this, data, bufferSizeInbytesDiv3);
		}
	};
}
