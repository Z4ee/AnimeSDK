#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKRC4Encryptor_EncoderMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_BYTETOHEX_OFFSET UNITYSDK_OFFSET(0xA1ABD40)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0xA1AC140)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_2_OFFSET UNITYSDK_OFFSET(0xA1AC3D0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_3_OFFSET UNITYSDK_OFFSET(0xA1AC1F0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_OFFSET UNITYSDK_OFFSET(0xA1AC130)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_1_OFFSET UNITYSDK_OFFSET(0xA1AB970)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_2_OFFSET UNITYSDK_OFFSET(0xA1AC3C0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_3_OFFSET UNITYSDK_OFFSET(0xA1ABB10)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_OFFSET UNITYSDK_OFFSET(0xA1AB960)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GETKEY_OFFSET UNITYSDK_OFFSET(0xA1AC3E0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODERMODE_OFFSET UNITYSDK_OFFSET(0xA1AB850)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0xA1AB830)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA1AB810)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_RC4_OFFSET UNITYSDK_OFFSET(0xA1AB870)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_HEXTOBYTE_OFFSET UNITYSDK_OFFSET(0xA1AC200)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODERMODE_OFFSET UNITYSDK_OFFSET(0xA1AB860)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0xA1AB840)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_KEY_OFFSET UNITYSDK_OFFSET(0xA1AB820)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SUBCONVERTTOBASE64_OFFSET UNITYSDK_OFFSET(0xA1AC5B0)
#define MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB760)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRC4Encryptor_TypeDefinitionIndex = 43889;

	class MiHoYoSDKRC4Encryptor : public ::System::Object
	{
	public:
		::System::Text::Encoding* _encoding_k__BackingField; // 0x10
		::System::String* _Key_k__BackingField; // 0x18
		::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode _encoderMode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_KEY_OFFSET))(this, a1);
		}

		::System::Text::Encoding* get_encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODING_OFFSET))(this);
		}

		::System::Void set_encoding(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODING_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode get_encoderMode()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_ENCODERMODE_OFFSET))(this);
		}

		::System::Void set_encoderMode(::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SET_ENCODERMODE_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor* get_RC4()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKRC4Encryptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GET_RC4_OFFSET))();
		}

		::System::String* Encrypt(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_OFFSET))(this, a1);
		}

		::System::String* Encrypt_1(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Decrypt(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_OFFSET))(this, a1);
		}

		::System::String* Decrypt_1(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::MiHoYoSDKRC4Encryptor_EncoderMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Encrypt_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_2_OFFSET))(this, a1, a2);
		}

		::System::String* Decrypt_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_2_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* HexToByte(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_HEXTOBYTE_OFFSET))(this, a1);
		}

		::System::String* ByteToHex(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_BYTETOHEX_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* Encrypt_3(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_ENCRYPT_3_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* Decrypt_3(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_DECRYPT_3_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetKey(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_GETKEY_OFFSET))(this, a1, a2);
		}

		::System::String* SubConvertToBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKRC4ENCRYPTOR_SUBCONVERTTOBASE64_OFFSET))(this, a1, a2);
		}
	};
}
