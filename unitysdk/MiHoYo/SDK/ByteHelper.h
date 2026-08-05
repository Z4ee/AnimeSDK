#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BYTEHELPER_TOHEX_1_OFFSET UNITYSDK_OFFSET(0x1E5DE560)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_2_OFFSET UNITYSDK_OFFSET(0x1E5DE690)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_3_OFFSET UNITYSDK_OFFSET(0x1E5DE780)
#define MIHOYO_SDK_BYTEHELPER_TOHEX_OFFSET UNITYSDK_OFFSET(0x1E5DE510)
#define MIHOYO_SDK_BYTEHELPER_TOSTR_1_OFFSET UNITYSDK_OFFSET(0x1E5DE980)
#define MIHOYO_SDK_BYTEHELPER_TOSTR_OFFSET UNITYSDK_OFFSET(0x1E5DE8B0)
#define MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_1_OFFSET UNITYSDK_OFFSET(0x1E5DEB40)
#define MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_OFFSET UNITYSDK_OFFSET(0x1E5DEA60)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_1_OFFSET UNITYSDK_OFFSET(0x1E5DECE0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_2_OFFSET UNITYSDK_OFFSET(0x1E5DED80)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_3_OFFSET UNITYSDK_OFFSET(0x1E5DEDB0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_4_OFFSET UNITYSDK_OFFSET(0x1E5DEE00)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_5_OFFSET UNITYSDK_OFFSET(0x1E5DEE50)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_6_OFFSET UNITYSDK_OFFSET(0x1E5DEEE0)
#define MIHOYO_SDK_BYTEHELPER_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5DEC40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ByteHelper_TypeDefinitionIndex = 37167;

	class ByteHelper : public ::System::Object
	{
	public:
		static ::System::String* ToHex(::System::Byte b)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_OFFSET))(b);
		}

		static ::System::String* ToHex_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_1_OFFSET))(bytes);
		}

		static ::System::String* ToHex_2(::Il2CppArray<::System::Byte>* bytes, ::System::String* format)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_2_OFFSET))(bytes, format);
		}

		static ::System::String* ToHex_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOHEX_3_OFFSET))(bytes, offset, count);
		}

		static ::System::String* ToStr(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOSTR_OFFSET))(bytes);
		}

		static ::System::String* ToStr_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_TOSTR_1_OFFSET))(bytes, index, count);
		}

		static ::System::String* Utf8ToStr(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_OFFSET))(bytes);
		}

		static ::System::String* Utf8ToStr_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_UTF8TOSTR_1_OFFSET))(bytes, index, count);
		}

		static ::System::Void WriteTo(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::UInt32 num)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_OFFSET))(bytes, offset, num);
		}

		static ::System::Void WriteTo_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 num)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_1_OFFSET))(bytes, offset, num);
		}

		static ::System::Void WriteTo_2(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Byte num)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_2_OFFSET))(bytes, offset, num);
		}

		static ::System::Void WriteTo_3(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int16 num)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_3_OFFSET))(bytes, offset, num);
		}

		static ::System::Void WriteTo_4(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::UInt16 num)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_4_OFFSET))(bytes, offset, num);
		}

		static ::System::Void WriteTo_5(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_5_OFFSET))(bytes, offset, buffer);
		}

		static ::System::Void WriteTo_6(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::String* strBuffer)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BYTEHELPER_WRITETO_6_OFFSET))(bytes, offset, strBuffer);
		}
	};
}
