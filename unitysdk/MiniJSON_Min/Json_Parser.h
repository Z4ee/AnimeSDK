#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiniJSON_Min/Json_Parser_TOKEN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StringReader; }

#define MINIJSON_MIN_JSON_PARSER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2EA730)
#define MINIJSON_MIN_JSON_PARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1D2EA650)
#define MINIJSON_MIN_JSON_PARSER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1D2EA000)
#define MINIJSON_MIN_JSON_PARSER_GET_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1D2EA380)
#define MINIJSON_MIN_JSON_PARSER_GET_NEXTWORD_OFFSET UNITYSDK_OFFSET(0x1D2EA060)
#define MINIJSON_MIN_JSON_PARSER_GET_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1D2E9FA0)
#define MINIJSON_MIN_JSON_PARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1D2EB190)
#define MINIJSON_MIN_JSON_PARSER_PARSEBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1D2EB290)
#define MINIJSON_MIN_JSON_PARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1D2EB330)
#define MINIJSON_MIN_JSON_PARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2EA780)
#define MINIJSON_MIN_JSON_PARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1D2EA930)
#define MINIJSON_MIN_JSON_PARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D2EA760)
#define MINIJSON_MIN_JSON_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1D2E9CF0)
#define MINIJSON_MIN_JSON_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E9F20)

namespace MiniJSON_Min
{
	inline static constexpr unsigned int Json_Parser_TypeDefinitionIndex = 39186;

	class Json_Parser : public ::System::Object
	{
	public:
		// static const ::System::String* WHITE_SPACE; // 0x0
		// static const ::System::String* WORD_BREAK; // 0x0
		::System::IO::StringReader* json; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER__CTOR_OFFSET))(this, a1);
		}

		::System::Char get_PeekChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_GET_PEEKCHAR_OFFSET))(this);
		}

		::System::Char get_NextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_GET_NEXTCHAR_OFFSET))(this);
		}

		::System::String* get_NextWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_GET_NEXTWORD_OFFSET))(this);
		}

		::MiniJSON_Min::Json_Parser_TOKEN get_NextToken()
		{
			return ((::MiniJSON_Min::Json_Parser_TOKEN(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_GET_NEXTTOKEN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_DISPOSE_OFFSET))(this);
		}

		static ::System::Object* Parse(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSE_OFFSET))(a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ParseObject()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ParseArray()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSEARRAY_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSEVALUE_OFFSET))(this);
		}

		::System::Object* ParseByToken(::MiniJSON_Min::Json_Parser_TOKEN a1)
		{
			return ((::System::Object*(*)(::PVOID, ::MiniJSON_Min::Json_Parser_TOKEN))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSEBYTOKEN_OFFSET))(this, a1);
		}

		::System::String* ParseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSESTRING_OFFSET))(this);
		}

		::System::Object* ParseNumber()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_PARSENUMBER_OFFSET))(this);
		}

		::System::Void EatWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_PARSER_EATWHITESPACE_OFFSET))(this);
		}
	};
}
