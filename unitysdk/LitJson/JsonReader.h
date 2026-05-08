#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/JsonToken.h"
#include "unitysdk/LitJson/ParserToken.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class Lexer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::IO { class TextReader; }

#define LITJSON_JSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BEE00A0)
#define LITJSON_JSONREADER_GET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x1BEDE600)
#define LITJSON_JSONREADER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x1BEDE640)
#define LITJSON_JSONREADER_GET_COMMENTSTACK_OFFSET UNITYSDK_OFFSET(0x1BEDE680)
#define LITJSON_JSONREADER_GET_ENDOFINPUT_OFFSET UNITYSDK_OFFSET(0x1BEDE6E0)
#define LITJSON_JSONREADER_GET_ENDOFJSON_OFFSET UNITYSDK_OFFSET(0x1BEDE6F0)
#define LITJSON_JSONREADER_GET_SKIPMISMATCHMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEDE6C0)
#define LITJSON_JSONREADER_GET_SKIPNONMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEDE6A0)
#define LITJSON_JSONREADER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1BEDE700)
#define LITJSON_JSONREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BEDE710)
#define LITJSON_JSONREADER_POPULATEPARSETABLE_OFFSET UNITYSDK_OFFSET(0x1BEDE740)
#define LITJSON_JSONREADER_PROCESSNUMBER_OFFSET UNITYSDK_OFFSET(0x1BEDFB10)
#define LITJSON_JSONREADER_PROCESSSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BEDFDB0)
#define LITJSON_JSONREADER_READTOKEN_OFFSET UNITYSDK_OFFSET(0x1BEDFFD0)
#define LITJSON_JSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x1BEE00E0)
#define LITJSON_JSONREADER_SET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x1BEDE620)
#define LITJSON_JSONREADER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x1BEDE660)
#define LITJSON_JSONREADER_SET_SKIPMISMATCHMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEDE6D0)
#define LITJSON_JSONREADER_SET_SKIPNONMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BEDE6B0)
#define LITJSON_JSONREADER_TABLEADDCOL_OFFSET UNITYSDK_OFFSET(0x1BEDF990)
#define LITJSON_JSONREADER_TABLEADDROW_OFFSET UNITYSDK_OFFSET(0x1BEDF850)
#define LITJSON_JSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEDE720)
#define LITJSON_JSONREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEDF840)
#define LITJSON_JSONREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEDF730)
#define LITJSON_JSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDF660)

namespace LitJson
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 7866;

	class JsonReader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>** StaticGet_parse_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonReader_TypeDefinitionIndex)->GetStaticField(0x6DB0);
		}
		::System::IO::TextReader* reader; // 0x10
		::System::Object* token_value; // 0x18
		::System::Collections::Generic::Stack_1<::System::Int32>* automaton_stack; // 0x20
		::LitJson::Lexer* lexer; // 0x28
		::System::Boolean end_of_input; // 0x30
		::System::Boolean skip_non_members; // 0x31
		::System::Boolean skip_mismatch_members; // 0x32
		::System::Boolean reader_is_owned; // 0x33
		::LitJson::JsonToken token; // 0x34
		::System::Boolean read_started; // 0x38
		::System::Boolean end_of_json; // 0x39
		::System::Boolean parser_in_string; // 0x3A
		::System::Boolean parser_return; // 0x3B
		::System::Int32 current_symbol; // 0x3C
		::System::Int32 current_input; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* json_text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER__CTOR_OFFSET))(this, json_text);
		}

		::System::Void _ctor_1(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER__CTOR_1_OFFSET))(this, reader);
		}

		::System::Void _ctor_2(::System::IO::TextReader* reader, ::System::Boolean owned)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER__CTOR_2_OFFSET))(this, reader, owned);
		}

		::System::Boolean get_AllowComments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_ALLOWCOMMENTS_OFFSET))(this);
		}

		::System::Void set_AllowComments(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_SET_ALLOWCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowSingleQuotedStrings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this);
		}

		::System::Void set_AllowSingleQuotedStrings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Stack_1<::System::String*>* get_CommentStack()
		{
			return ((::System::Collections::Generic::Stack_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_COMMENTSTACK_OFFSET))(this);
		}

		::System::Boolean get_SkipNonMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_SKIPNONMEMBERS_OFFSET))(this);
		}

		::System::Void set_SkipNonMembers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_SET_SKIPNONMEMBERS_OFFSET))(this, value);
		}

		::System::Boolean get_SkipMismatchMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_SKIPMISMATCHMEMBERS_OFFSET))(this);
		}

		::System::Void set_SkipMismatchMembers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_SET_SKIPMISMATCHMEMBERS_OFFSET))(this, value);
		}

		::System::Boolean get_EndOfInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_ENDOFINPUT_OFFSET))(this);
		}

		::System::Boolean get_EndOfJson()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_ENDOFJSON_OFFSET))(this);
		}

		::LitJson::JsonToken get_Token()
		{
			return ((::LitJson::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_TOKEN_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_GET_VALUE_OFFSET))(this);
		}

		static ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>* PopulateParseTable()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>*(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_POPULATEPARSETABLE_OFFSET))();
		}

		static ::System::Void TableAddCol(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>* parse_table, ::LitJson::ParserToken row, ::System::Int32 col, ::Il2CppArray<::System::Int32>* symbols)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>*, ::LitJson::ParserToken, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_TABLEADDCOL_OFFSET))(parse_table, row, col, symbols);
		}

		static ::System::Void TableAddRow(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>* parse_table, ::LitJson::ParserToken rule)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>*>*, ::LitJson::ParserToken))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_TABLEADDROW_OFFSET))(parse_table, rule);
		}

		::System::Void ProcessNumber(::System::String* number)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_PROCESSNUMBER_OFFSET))(this, number);
		}

		::System::Void ProcessSymbol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_PROCESSSYMBOL_OFFSET))(this);
		}

		::System::Boolean ReadToken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_READTOKEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_CLOSE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONREADER_READ_OFFSET))(this);
		}
	};
}
