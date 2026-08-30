#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/TokenConstType.h"
#include "unitysdk/IniParserEx/TokenType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INIPARSEREX_TOKEN_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1ED03390)
#define INIPARSEREX_TOKEN_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x1ED02100)
#define INIPARSEREX_TOKEN_GET_CONSTTYPE_OFFSET UNITYSDK_OFFSET(0x1ED03880)
#define INIPARSEREX_TOKEN_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1ED03900)
#define INIPARSEREX_TOKEN_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1ED038E0)
#define INIPARSEREX_TOKEN_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1ED038C0)
#define INIPARSEREX_TOKEN_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1ED038A0)
#define INIPARSEREX_TOKEN_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1ECFDFE0)
#define INIPARSEREX_TOKEN_MATCHES_OFFSET UNITYSDK_OFFSET(0x1ED020A0)
#define INIPARSEREX_TOKEN_SETCONSTBOOL_OFFSET UNITYSDK_OFFSET(0x1ECFE040)
#define INIPARSEREX_TOKEN_SETCONSTCHAR_OFFSET UNITYSDK_OFFSET(0x1ECFE100)
#define INIPARSEREX_TOKEN_SETCONSTFLOAT_OFFSET UNITYSDK_OFFSET(0x1ECFE080)
#define INIPARSEREX_TOKEN_SETCONSTSTRING_OFFSET UNITYSDK_OFFSET(0x1ECFE140)
#define INIPARSEREX_TOKEN_SETINT64_OFFSET UNITYSDK_OFFSET(0x1ECFE0C0)
#define INIPARSEREX_TOKEN_SET_CONSTTYPE_OFFSET UNITYSDK_OFFSET(0x1ED03890)
#define INIPARSEREX_TOKEN_SET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1ED038F0)
#define INIPARSEREX_TOKEN_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1ED038D0)
#define INIPARSEREX_TOKEN_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1ED038B0)
#define INIPARSEREX_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFDF50)

namespace IniParserEx
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 3923;

	class Token : public ::System::Object
	{
	public:
		::System::Object* RawTokenValue; // 0x10
		::IniParserEx::TokenConstType _ConstType_k__BackingField; // 0x18
		::IniParserEx::TokenType _TokenType_k__BackingField; // 0x1C
		::System::Int32 _StartPos_k__BackingField; // 0x20
		::System::Int32 _StartLine_k__BackingField; // 0x24
		::System::Text::StringBuilder* _Identifier_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN__CTOR_OFFSET))(this, a1, a2);
		}

		::IniParserEx::TokenConstType get_ConstType()
		{
			return ((::IniParserEx::TokenConstType(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_CONSTTYPE_OFFSET))(this);
		}

		::System::Void set_ConstType(::IniParserEx::TokenConstType a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::TokenConstType))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_CONSTTYPE_OFFSET))(this, a1);
		}

		::IniParserEx::TokenType get_TokenType()
		{
			return ((::IniParserEx::TokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::IniParserEx::TokenType a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::TokenType))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_TOKENTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_StartPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_STARTPOS_OFFSET))(this, a1);
		}

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_GET_STARTLINE_OFFSET))(this);
		}

		::System::Void set_StartLine(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SET_STARTLINE_OFFSET))(this, a1);
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

		::System::Boolean Matches(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_MATCHES_OFFSET))(this, a1);
		}

		::System::Boolean Matches_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_MATCHES_1_OFFSET))(this, a1);
		}

		::System::Void SetInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETINT64_OFFSET))(this, a1);
		}

		::System::Void SetConstBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTBOOL_OFFSET))(this, a1);
		}

		::System::Void SetConstFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTFLOAT_OFFSET))(this, a1);
		}

		::System::Void SetConstString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTSTRING_OFFSET))(this, a1);
		}

		::System::Void SetConstChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_TOKEN_SETCONSTCHAR_OFFSET))(this, a1);
		}
	};
}
