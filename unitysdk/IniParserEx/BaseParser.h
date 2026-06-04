#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/BaseParser___c__DisplayClass22_0.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class Token; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INIPARSEREX_BASEPARSER_CLEARCOMMENT_OFFSET UNITYSDK_OFFSET(0x1B26F3E0)
#define INIPARSEREX_BASEPARSER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x1B26EB20)
#define INIPARSEREX_BASEPARSER_GETLEADINGCHAR_OFFSET UNITYSDK_OFFSET(0x1B26F4F0)
#define INIPARSEREX_BASEPARSER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x1B26F400)
#define INIPARSEREX_BASEPARSER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1B26FA80)
#define INIPARSEREX_BASEPARSER_INITPARSERSOURCE_OFFSET UNITYSDK_OFFSET(0x1B26E930)
#define INIPARSEREX_BASEPARSER_ISBEGINCOMMENT_OFFSET UNITYSDK_OFFSET(0x1B26E970)
#define INIPARSEREX_BASEPARSER_ISENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x1B26EA40)
#define INIPARSEREX_BASEPARSER_ISENDOFLINE_OFFSET UNITYSDK_OFFSET(0x1B271380)
#define INIPARSEREX_BASEPARSER_ISEOL_OFFSET UNITYSDK_OFFSET(0x1B26FA50)
#define INIPARSEREX_BASEPARSER_ISLINECOMMENT_OFFSET UNITYSDK_OFFSET(0x1B26EAB0)
#define INIPARSEREX_BASEPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1B26FA30)
#define INIPARSEREX_BASEPARSER_MATCHSYMBOL_OFFSET UNITYSDK_OFFSET(0x1B271300)
#define INIPARSEREX_BASEPARSER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1B26E9E0)
#define INIPARSEREX_BASEPARSER_REQUIRESYMBOL_OFFSET UNITYSDK_OFFSET(0x1B2713C0)
#define INIPARSEREX_BASEPARSER_UNGETCHAR_OFFSET UNITYSDK_OFFSET(0x1B26FA70)
#define INIPARSEREX_BASEPARSER_UNGETTOKEN_OFFSET UNITYSDK_OFFSET(0x1B2712D0)
#define INIPARSEREX_BASEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2713D0)
#define INIPARSEREX_BASEPARSER__GETTOKEN_G__ISPAIR_22_0_OFFSET UNITYSDK_OFFSET(0x1B2712B0)

namespace IniParserEx
{
	inline static constexpr unsigned int BaseParser_TypeDefinitionIndex = 3915;

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

		::System::Void InitParserSource(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_INITPARSERSOURCE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBeginComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISBEGINCOMMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsEndComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISENDCOMMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsLineComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISLINECOMMENT_OFFSET))(this, a1);
		}

		::System::Char GetChar(::System::Boolean a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETCHAR_OFFSET))(this, a1);
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

		static ::System::Boolean IsEOL(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISEOL_OFFSET))(a1);
		}

		static ::System::Boolean IsWhitespace(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISWHITESPACE_OFFSET))(a1);
		}

		::System::Void ClearComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_CLEARCOMMENT_OFFSET))(this);
		}

		::IniParserEx::Token* GetToken(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::IniParserEx::Token*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void UnGetToken(::IniParserEx::Token* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_UNGETTOKEN_OFFSET))(this, a1);
		}

		::System::Boolean MatchSymbol(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_MATCHSYMBOL_OFFSET))(this, a1);
		}

		::System::Boolean IsEndOfLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_ISENDOFLINE_OFFSET))(this);
		}

		::System::Void RequireSymbol(::System::Char a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_REQUIRESYMBOL_OFFSET))(this, a1, a2);
		}

		::System::String* GetLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER_GETLOCATION_OFFSET))(this);
		}

		static ::System::Boolean _GetToken_g__IsPair_22_0(::System::Char a1, ::System::Char a2, ::IniParserEx::BaseParser___c__DisplayClass22_0& a3)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Char, ::IniParserEx::BaseParser___c__DisplayClass22_0&))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSER__GETTOKEN_G__ISPAIR_22_0_OFFSET))(a1, a2, a3);
		}
	};
}
