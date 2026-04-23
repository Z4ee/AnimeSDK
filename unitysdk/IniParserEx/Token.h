#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/TokenConstType.h"
#include "unitysdk/IniParserEx/TokenType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INIPARSEREX_TOKEN_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1A422E70)
#define INIPARSEREX_TOKEN_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x1A421AF0)
#define INIPARSEREX_TOKEN_GET_CONSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A423360)
#define INIPARSEREX_TOKEN_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A4233E0)
#define INIPARSEREX_TOKEN_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1A4233C0)
#define INIPARSEREX_TOKEN_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A4233A0)
#define INIPARSEREX_TOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A423380)
#define INIPARSEREX_TOKEN_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1A41DD80)
#define INIPARSEREX_TOKEN_MATCHES_OFFSET UNITYSDK_OFFSET(0x1A421A90)
#define INIPARSEREX_TOKEN_SETCONSTBOOL_OFFSET UNITYSDK_OFFSET(0x1A41DDE0)
#define INIPARSEREX_TOKEN_SETCONSTCHAR_OFFSET UNITYSDK_OFFSET(0x1A41DEA0)
#define INIPARSEREX_TOKEN_SETCONSTFLOAT_OFFSET UNITYSDK_OFFSET(0x1A41DE20)
#define INIPARSEREX_TOKEN_SETCONSTSTRING_OFFSET UNITYSDK_OFFSET(0x1A41DEE0)
#define INIPARSEREX_TOKEN_SETINT64_OFFSET UNITYSDK_OFFSET(0x1A41DE60)
#define INIPARSEREX_TOKEN_SET_CONSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A423370)
#define INIPARSEREX_TOKEN_SET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1A4233D0)
#define INIPARSEREX_TOKEN_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A4233B0)
#define INIPARSEREX_TOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A423390)
#define INIPARSEREX_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A41DCF0)

namespace IniParserEx
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 3737;

	class Token : public ::System::Object
	{
	public:
		::System::Object* RawTokenValue; // 0x10
		::IniParserEx::TokenConstType _ConstType_k__BackingField; // 0x18
		::IniParserEx::TokenType _TokenType_k__BackingField; // 0x1C
		::System::Int32 _StartPos_k__BackingField; // 0x20
		::System::Int32 _StartLine_k__BackingField; // 0x24
		::System::Text::StringBuilder* _Identifier_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 startPos, ::System::Int32 startLine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN__CTOR_OFFSET))(this, startPos, startLine);
		}

		::IniParserEx::TokenConstType get_ConstType()
		{
			return ((::IniParserEx::TokenConstType(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_CONSTTYPE_OFFSET))(this);
		}

		::System::Void set_ConstType(::IniParserEx::TokenConstType value)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::TokenConstType))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_CONSTTYPE_OFFSET))(this, value);
		}

		::IniParserEx::TokenType get_TokenType()
		{
			return ((::IniParserEx::TokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::IniParserEx::TokenType value)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::TokenType))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_StartPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_STARTPOS_OFFSET))(this, value);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_STARTLINE_OFFSET))(this);
		}

		::System::Void set_StartLine(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_STARTLINE_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* get_Identifier()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* GetTokenName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GETTOKENNAME_OFFSET))(this);
		}

		::System::String* GetConstantValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GETCONSTANTVALUE_OFFSET))(this);
		}

		::System::Boolean Matches(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_MATCHES_OFFSET))(this, c);
		}

		::System::Boolean Matches_1(::System::String* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_MATCHES_1_OFFSET))(this, s);
		}

		::System::Void SetInt64(::System::Int64 i64)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETINT64_OFFSET))(this, i64);
		}

		::System::Void SetConstBool(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTBOOL_OFFSET))(this, b);
		}

		::System::Void SetConstFloat(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTFLOAT_OFFSET))(this, f);
		}

		::System::Void SetConstString(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTSTRING_OFFSET))(this, s);
		}

		::System::Void SetConstChar(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTCHAR_OFFSET))(this, c);
		}
	};
}
