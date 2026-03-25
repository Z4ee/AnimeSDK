#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/BaseParser___c__DisplayClass22_0.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class Token; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INIPARSEREX_BASEPARSER_CLEARCOMMENT_OFFSET UNITYSDK_OFFSET(0x189E2E00)
#define INIPARSEREX_BASEPARSER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x189E2830)
#define INIPARSEREX_BASEPARSER_GETLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x189E2F10)
#define INIPARSEREX_BASEPARSER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x189E2E20)
#define INIPARSEREX_BASEPARSER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x189E3130)
#define INIPARSEREX_BASEPARSER_INITPARSERSOURCE_OFFSET UNITYSDK_OFFSET(0x189E2640)
#define INIPARSEREX_BASEPARSER_ISBEGINCOMMENT_OFFSET UNITYSDK_OFFSET(0x189E2680)
#define INIPARSEREX_BASEPARSER_ISENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x189E2750)
#define INIPARSEREX_BASEPARSER_ISENDOFLINE_OFFSET UNITYSDK_OFFSET(0x189E4720)
#define INIPARSEREX_BASEPARSER_ISEOL_OFFSET UNITYSDK_OFFSET(0x189E3100)
#define INIPARSEREX_BASEPARSER_ISLINECOMMENT_OFFSET UNITYSDK_OFFSET(0x189E27C0)
#define INIPARSEREX_BASEPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x189E30E0)
#define INIPARSEREX_BASEPARSER_MATCHSYMBOL_OFFSET UNITYSDK_OFFSET(0x189E46A0)
#define INIPARSEREX_BASEPARSER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x189E26F0)
#define INIPARSEREX_BASEPARSER_REQUIRESYMBOL_OFFSET UNITYSDK_OFFSET(0x189E4760)
#define INIPARSEREX_BASEPARSER_UNGETCHAR_OFFSET UNITYSDK_OFFSET(0x189E3120)
#define INIPARSEREX_BASEPARSER_UNGETTOKEN_OFFSET UNITYSDK_OFFSET(0x189E4670)
#define INIPARSEREX_BASEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E4770)
#define INIPARSEREX_BASEPARSER__GETTOKEN_G__ISPAIR_22_0_OFFSET UNITYSDK_OFFSET(0x189E4650)

namespace IniParserEx
{
	inline static constexpr unsigned int BaseParser_TypeDefinitionIndex = 3739;

	class BaseParser : public ::System::Object
	{
	public:
		::System::String* FileName; // 0x10
		::System::String* Input; // 0x18
		::System::Int32 InputLen; // 0x20
		::System::Int32 InputLine; // 0x24
		::System::Int32 InputPos; // 0x28
		::System::Text::StringBuilder* PrevComment; // 0x30
		::System::Int32 PrevLine; // 0x38
		::System::Int32 PrevPos; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER__CTOR_OFFSET))(this);
		}

		::System::Void InitParserSource(::System::String* fileName, ::System::String* sourceBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_INITPARSERSOURCE_OFFSET))(this, fileName, sourceBuffer);
		}

		::System::Boolean IsBeginComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISBEGINCOMMENT_OFFSET))(this, currentChar);
		}

		::System::Boolean IsEndComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISENDCOMMENT_OFFSET))(this, currentChar);
		}

		::System::Boolean IsLineComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISLINECOMMENT_OFFSET))(this, currentChar);
		}

		::System::Char GetChar(::System::Boolean literal)
		{
			return ((::System::Char(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETCHAR_OFFSET))(this, literal);
		}

		::System::Char PeekChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_PEEKCHAR_OFFSET))(this);
		}

		::System::Char GetLeadingChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETLEADINGCHAR_OFFSET))(this);
		}

		::System::Void UnGetChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_UNGETCHAR_OFFSET))(this);
		}

		static ::System::Boolean IsEOL(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISEOL_OFFSET))(c);
		}

		static ::System::Boolean IsWhitespace(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISWHITESPACE_OFFSET))(c);
		}

		::System::Void ClearComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_CLEARCOMMENT_OFFSET))(this);
		}

		::IniParserEx::Token* GetToken(::System::Boolean noConst, ::System::Boolean asSingleChar)
		{
			return ((::IniParserEx::Token*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETTOKEN_OFFSET))(this, noConst, asSingleChar);
		}

		::System::Void UnGetToken(::IniParserEx::Token* token)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_UNGETTOKEN_OFFSET))(this, token);
		}

		::System::Boolean MatchSymbol(::System::Char match)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_MATCHSYMBOL_OFFSET))(this, match);
		}

		::System::Boolean IsEndOfLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISENDOFLINE_OFFSET))(this);
		}

		::System::Void RequireSymbol(::System::Char match, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_REQUIRESYMBOL_OFFSET))(this, match, tag);
		}

		::System::String* GetLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETLOCATION_OFFSET))(this);
		}

		static ::System::Boolean _GetToken_g__IsPair_22_0(::System::Char cc, ::System::Char dd, ::IniParserEx::BaseParser___c__DisplayClass22_0& a3)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Char, ::IniParserEx::BaseParser___c__DisplayClass22_0&))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER__GETTOKEN_G__ISPAIR_22_0_OFFSET))(cc, dd, a3);
		}
	};
}
