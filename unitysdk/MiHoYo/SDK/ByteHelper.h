#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BYTEHELPER_TOHEX_1_OFFSET UNITYSDK_OFFSET(0x16A8AB90)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_2_OFFSET UNITYSDK_OFFSET(0x16A8AC90)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_3_OFFSET UNITYSDK_OFFSET(0x16A8AD90)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_OFFSET UNITYSDK_OFFSET(0x16A8AB60)
#define MIHOYO_SDK_BYTEHELPER_TOSTR_1_OFFSET UNITYSDK_OFFSET(0x16A8AFB0)
#define MIHOYO_SDK_BYTEHELPER_TOSTR_OFFSET UNITYSDK_OFFSET(0x16A8AE90)
#define MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_1_OFFSET UNITYSDK_OFFSET(0x16A8B180)
#define MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_OFFSET UNITYSDK_OFFSET(0x16A8B0E0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_1_OFFSET UNITYSDK_OFFSET(0x16A8B290)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_2_OFFSET UNITYSDK_OFFSET(0x16A8B2F0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_3_OFFSET UNITYSDK_OFFSET(0x16A8B320)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_4_OFFSET UNITYSDK_OFFSET(0x16A8B360)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_5_OFFSET UNITYSDK_OFFSET(0x16A8B3A0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_6_OFFSET UNITYSDK_OFFSET(0x16A8B410)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_OFFSET UNITYSDK_OFFSET(0x16A8B230)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ByteHelper_TypeDefinitionIndex = 46573;

	class ByteHelper : public ::System::Object
	{
	public:
		static ::System::String* ToHex(::System::Byte a1)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_OFFSET))(a1);
		}

		static ::System::String* ToHex_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_1_OFFSET))(a1);
		}

		static ::System::String* ToHex_2(::Il2CppArray<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_2_OFFSET))(a1, a2);
		}

		static ::System::String* ToHex_3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToStr(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOSTR_OFFSET))(a1);
		}

		static ::System::String* ToStr_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOSTR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Utf8ToStr(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_OFFSET))(a1);
		}

		static ::System::String* Utf8ToStr_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_4(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_5(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteTo_6(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_6_OFFSET))(a1, a2, a3);
		}
	};
}
