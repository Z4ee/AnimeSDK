#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SharpJson/Lexer_Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x19DC81B0)
#define SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x19DC80A0)
#define SHARPJSON_LEXER_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x19DC7FB0)
#define SHARPJSON_LEXER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x19DC7FC0)
#define SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x19DC7FE0)
#define SHARPJSON_LEXER_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x19DC7630)
#define SHARPJSON_LEXER_NEXTTOKEN_1_OFFSET UNITYSDK_OFFSET(0x19DC8230)
#define SHARPJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x19DC75A0)
#define SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET UNITYSDK_OFFSET(0x19DC7F50)
#define SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x19DC7EF0)
#define SHARPJSON_LEXER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x19DC7750)
#define SHARPJSON_LEXER_RESET_OFFSET UNITYSDK_OFFSET(0x19DC8000)
#define SHARPJSON_LEXER_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x19DC7FD0)
#define SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x19DC7FF0)
#define SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x19DC8020)
#define SHARPJSON_LEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC6E20)

namespace SharpJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 36352;

	class Lexer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* json; // 0x10
		::Il2CppArray<::System::Char>* stringBuffer; // 0x18
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x20
		::System::Boolean success; // 0x21
		::System::Int32 index; // 0x24
		::System::Int32 _lineNumber_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER__CTOR_OFFSET))(this, text);
		}

		::System::Boolean get_hasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_HASERROR_OFFSET))(this);
		}

		::System::Int32 get_lineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void set_lineNumber(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_LINENUMBER_OFFSET))(this, value);
		}

		::System::Boolean get_parseNumbersAsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET))(this);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_RESET_OFFSET))(this);
		}

		::System::String* ParseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSESTRING_OFFSET))(this);
		}

		::System::String* GetNumberString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET))(this);
		}

		::System::Single ParseFloatNumber()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET))(this);
		}

		::System::Double ParseDoubleNumber()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET))(this);
		}

		::System::Int32 GetLastIndexOfNumber(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET))(this, index);
		}

		::System::Void SkipWhiteSpaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET))(this);
		}

		::SharpJson::Lexer_Token LookAhead()
		{
			return ((::SharpJson::Lexer_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_LOOKAHEAD_OFFSET))(this);
		}

		::SharpJson::Lexer_Token NextToken()
		{
			return ((::SharpJson::Lexer_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_OFFSET))(this);
		}

		static ::SharpJson::Lexer_Token NextToken_1(::Il2CppArray<::System::Char>* json, ::System::Int32& index)
		{
			return ((::SharpJson::Lexer_Token(*)(::Il2CppArray<::System::Char>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_1_OFFSET))(json, index);
		}
	};
}
