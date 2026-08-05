#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_10_OFFSET UNITYSDK_OFFSET(0x1FC487B0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_11_OFFSET UNITYSDK_OFFSET(0x1FC48A80)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_12_OFFSET UNITYSDK_OFFSET(0x1FC48B00)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x1FC47E90)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x1FC47FA0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x1FC47D90)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x1FC480F0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x1FC48170)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x1FC482F0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x1FC483F0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x1FC48470)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_9_OFFSET UNITYSDK_OFFSET(0x1FC48730)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_OFFSET UNITYSDK_OFFSET(0x1FC47C80)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_EMPTY_OFFSET UNITYSDK_OFFSET(0x1FC495E0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC49610)

namespace OptimizeString
{
	inline static constexpr unsigned int StringBuilderExtensions_TypeDefinitionIndex = 7256;

	class StringBuilderExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ms_digits()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::System::UInt32* StaticGet_ms_default_decimal_places()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x32C0);
		}
		static ::System::Char* StaticGet_ms_default_pad_char()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x32C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* Concat(::System::Text::StringBuilder* string_builder, ::System::Int16 short_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int16, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_OFFSET))(string_builder, short_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_1(::System::Text::StringBuilder* string_builder, ::System::SByte sbyte_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::SByte, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_1_OFFSET))(string_builder, sbyte_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_2(::System::Text::StringBuilder* string_builder, ::System::UInt32 uint_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt32, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_2_OFFSET))(string_builder, uint_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_3(::System::Text::StringBuilder* string_builder, ::System::Int32 int_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_3_OFFSET))(string_builder, int_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_4(::System::Text::StringBuilder* string_builder, ::System::Int32 int_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_4_OFFSET))(string_builder, int_val);
		}

		static ::System::Text::StringBuilder* Concat_5(::System::Text::StringBuilder* string_builder, ::System::UInt64 ulong_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_5_OFFSET))(string_builder, ulong_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_6(::System::Text::StringBuilder* string_builder, ::System::Int64 long_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_6_OFFSET))(string_builder, long_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_7(::System::Text::StringBuilder* string_builder, ::System::Int64 long_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int64))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_7_OFFSET))(string_builder, long_val);
		}

		static ::System::Text::StringBuilder* Concat_8(::System::Text::StringBuilder* string_builder, ::System::Single float_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_8_OFFSET))(string_builder, float_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Text::StringBuilder* Concat_9(::System::Text::StringBuilder* string_builder, ::System::Single float_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Single))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_9_OFFSET))(string_builder, float_val);
		}

		static ::System::Text::StringBuilder* Concat_10(::System::Text::StringBuilder* string_builder, ::System::Double double_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Double, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_10_OFFSET))(string_builder, double_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Text::StringBuilder* Concat_11(::System::Text::StringBuilder* string_builder, ::System::Double double_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Double))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_11_OFFSET))(string_builder, double_val);
		}

		static ::System::Text::StringBuilder* Concat_12(::System::Text::StringBuilder* string_builder, ::System::Decimal decimal_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Decimal, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_12_OFFSET))(string_builder, decimal_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Void Empty(::System::Text::StringBuilder* string_builder)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_EMPTY_OFFSET))(string_builder);
		}
	};
}
