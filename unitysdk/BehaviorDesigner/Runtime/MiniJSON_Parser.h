#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/MiniJSON_Parser_TOKEN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StringReader; }

#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4A7B30)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1D4A9280)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1D4A8EC0)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1D4A7E00)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTWORD_OFFSET UNITYSDK_OFFSET(0x1D4A8F40)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1D4A9510)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1D4A7680)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1D4A8AC0)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1D4A8BE0)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1D4A8D30)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4A7B90)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1D4A8270)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D4A7AE0)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1D4A7870)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A77A0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int MiniJSON_Parser_TypeDefinitionIndex = 33249;

	class MiniJSON_Parser : public ::System::Object
	{
	public:
		// static const ::System::String* WORD_BREAK; // 0x0
		::System::IO::StringReader* json; // 0x10

		::System::Void _ctor(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER__CTOR_OFFSET))(this, jsonString);
		}

		static ::System::Boolean IsWordBreak(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_ISWORDBREAK_OFFSET))(c);
		}

		static ::System::Object* Parse(::System::String* jsonString)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSE_OFFSET))(jsonString);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ParseObject()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ParseArray()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEARRAY_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEVALUE_OFFSET))(this);
		}

		::System::Object* ParseByToken(::BehaviorDesigner::Runtime::MiniJSON_Parser_TOKEN token)
		{
			return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::MiniJSON_Parser_TOKEN))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSEBYTOKEN_OFFSET))(this, token);
		}

		::System::String* ParseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSESTRING_OFFSET))(this);
		}

		::System::Object* ParseNumber()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_PARSENUMBER_OFFSET))(this);
		}

		::System::Void EatWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_EATWHITESPACE_OFFSET))(this);
		}

		::System::Char get_PeekChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_PEEKCHAR_OFFSET))(this);
		}

		::System::Char get_NextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTCHAR_OFFSET))(this);
		}

		::System::String* get_NextWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTWORD_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::MiniJSON_Parser_TOKEN get_NextToken()
		{
			return ((::BehaviorDesigner::Runtime::MiniJSON_Parser_TOKEN(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_PARSER_GET_NEXTTOKEN_OFFSET))(this);
		}
	};
}
