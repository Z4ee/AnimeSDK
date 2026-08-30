#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/Text/Utf8Parser_ParseNumberOptions.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1EE17830)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSEUINT32D_OFFSET UNITYSDK_OFFSET(0x1EE18330)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE175F0)
#define SYSTEM_BUFFERS_TEXT_UTF8PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE18880)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Parser_TypeDefinitionIndex = 4999;

	class Utf8Parser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Parser_TypeDefinitionIndex)->GetStaticField(0x190);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Parser_TypeDefinitionIndex)->GetStaticField(0x198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Decimal& a2, ::System::Int32& a3, ::System::Char a4)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Decimal&, ::System::Int32&, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseUInt32D(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSEUINT32D_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseNumber(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::NumberBuffer& a2, ::System::Int32& a3, ::System::Buffers::Text::Utf8Parser_ParseNumberOptions a4, ::System::Boolean& a5)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::NumberBuffer&, ::System::Int32&, ::System::Buffers::Text::Utf8Parser_ParseNumberOptions, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8PARSER_TRYPARSENUMBER_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
