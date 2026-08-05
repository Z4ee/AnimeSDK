#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/Text/Utf8Parser_ParseNumberOptions.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1F0866B0)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSEUINT32D_OFFSET UNITYSDK_OFFSET(0x1F087170)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1F086490)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F087730)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Parser_TypeDefinitionIndex = 6592;

	class Utf8Parser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Parser_TypeDefinitionIndex)->GetStaticField(0x5AF0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Parser_TypeDefinitionIndex)->GetStaticField(0x5AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Decimal& value, ::System::Int32& bytesConsumed, ::System::Char standardFormat)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Decimal&, ::System::Int32&, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSE_OFFSET))(source, value, bytesConsumed, standardFormat);
		}

		static ::System::Boolean TryParseUInt32D(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& value, ::System::Int32& bytesConsumed)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSEUINT32D_OFFSET))(source, value, bytesConsumed);
		}

		static ::System::Boolean TryParseNumber(::System::ReadOnlySpan_1<::System::Byte> source, ::System::NumberBuffer& number, ::System::Int32& bytesConsumed, ::System::Buffers::Text::Utf8Parser_ParseNumberOptions options, ::System::Boolean& textUsedExponentNotation)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::NumberBuffer&, ::System::Int32&, ::System::Buffers::Text::Utf8Parser_ParseNumberOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSENUMBER_OFFSET))(source, number, bytesConsumed, options, textUsedExponentNotation);
		}
	};
}
