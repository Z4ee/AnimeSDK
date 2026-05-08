#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_1_OFFSET UNITYSDK_OFFSET(0x1C540510)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_2_OFFSET UNITYSDK_OFFSET(0x1C540620)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_3_OFFSET UNITYSDK_OFFSET(0x1C540410)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_4_OFFSET UNITYSDK_OFFSET(0x1C540760)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_5_OFFSET UNITYSDK_OFFSET(0x1C5408F0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_6_OFFSET UNITYSDK_OFFSET(0x1C5409F0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_7_OFFSET UNITYSDK_OFFSET(0x1C540CB0)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_8_OFFSET UNITYSDK_OFFSET(0x1C540F80)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_OFFSET UNITYSDK_OFFSET(0x1C540300)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_EMPTY_OFFSET UNITYSDK_OFFSET(0x1C541A80)
#define OPTIMIZESTRING_STRINGBUILDEREXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C541AB0)

namespace OptimizeString
{
	inline static constexpr unsigned int StringBuilderExtensions_TypeDefinitionIndex = 7121;

	class StringBuilderExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ms_digits()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x5FF0);
		}
		static ::System::UInt32* StaticGet_ms_default_decimal_places()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x3220);
		}
		static ::System::Char* StaticGet_ms_default_pad_char()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderExtensions_TypeDefinitionIndex)->GetStaticField(0x3224);
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

		static ::System::Text::StringBuilder* Concat_4(::System::Text::StringBuilder* string_builder, ::System::UInt64 ulong_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_4_OFFSET))(string_builder, ulong_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_5(::System::Text::StringBuilder* string_builder, ::System::Int64 long_val, ::System::UInt32 pad_amount, ::System::Char pad_char, ::System::UInt32 base_val)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Int64, ::System::UInt32, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_5_OFFSET))(string_builder, long_val, pad_amount, pad_char, base_val);
		}

		static ::System::Text::StringBuilder* Concat_6(::System::Text::StringBuilder* string_builder, ::System::Single float_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_6_OFFSET))(string_builder, float_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Text::StringBuilder* Concat_7(::System::Text::StringBuilder* string_builder, ::System::Double double_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Double, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_7_OFFSET))(string_builder, double_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Text::StringBuilder* Concat_8(::System::Text::StringBuilder* string_builder, ::System::Decimal decimal_val, ::System::UInt32 decimal_places, ::System::UInt32 pad_amount, ::System::Char pad_char)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Decimal, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_CONCAT_8_OFFSET))(string_builder, decimal_val, decimal_places, pad_amount, pad_char);
		}

		static ::System::Void Empty(::System::Text::StringBuilder* string_builder)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDEREXTENSIONS_EMPTY_OFFSET))(string_builder);
		}
	};
}
