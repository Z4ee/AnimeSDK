#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_STRINGX_ADDWWWFILEPREFIX_OFFSET UNITYSDK_OFFSET(0x1DDAD650)
#define FOUNDATION_STRINGX_APPENDCOMMA_OFFSET UNITYSDK_OFFSET(0x1DDAEA10)
#define FOUNDATION_STRINGX_APPENDHTMLBR_OFFSET UNITYSDK_OFFSET(0x1DDAEB70)
#define FOUNDATION_STRINGX_APPENDHYPHEN_OFFSET UNITYSDK_OFFSET(0x1DDAECD0)
#define FOUNDATION_STRINGX_APPENDNEWLINE_OFFSET UNITYSDK_OFFSET(0x1DDAEAC0)
#define FOUNDATION_STRINGX_APPENDSEP_1_OFFSET UNITYSDK_OFFSET(0x1DDAED80)
#define FOUNDATION_STRINGX_APPENDSEP_OFFSET UNITYSDK_OFFSET(0x1DDAE9C0)
#define FOUNDATION_STRINGX_APPENDSPACE_OFFSET UNITYSDK_OFFSET(0x1DDAEC20)
#define FOUNDATION_STRINGX_APPENDWITHCOMMA_OFFSET UNITYSDK_OFFSET(0x1DDAEF80)
#define FOUNDATION_STRINGX_APPENDWITHHTMLBR_OFFSET UNITYSDK_OFFSET(0x1DDAF080)
#define FOUNDATION_STRINGX_APPENDWITHHYPHEN_OFFSET UNITYSDK_OFFSET(0x1DDAF100)
#define FOUNDATION_STRINGX_APPENDWITHNEWLINE_OFFSET UNITYSDK_OFFSET(0x1DDAF000)
#define FOUNDATION_STRINGX_APPENDWITHSEP_1_OFFSET UNITYSDK_OFFSET(0x1DDAEF10)
#define FOUNDATION_STRINGX_APPENDWITHSEP_OFFSET UNITYSDK_OFFSET(0x1DDAEE80)
#define FOUNDATION_STRINGX_APPENDWITHSPACE_OFFSET UNITYSDK_OFFSET(0x1DDAF180)
#define FOUNDATION_STRINGX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DDAF760)
#define FOUNDATION_STRINGX_FORMATTED_OFFSET UNITYSDK_OFFSET(0x1DDADB60)
#define FOUNDATION_STRINGX_F_OFFSET UNITYSDK_OFFSET(0x1DDA9EA0)
#define FOUNDATION_STRINGX_GETWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x1DDAE560)
#define FOUNDATION_STRINGX_INVERTCASE_OFFSET UNITYSDK_OFFSET(0x1DDADF50)
#define FOUNDATION_STRINGX_ISDATE_OFFSET UNITYSDK_OFFSET(0x1DDAD6C0)
#define FOUNDATION_STRINGX_ISINT_OFFSET UNITYSDK_OFFSET(0x1DDAD760)
#define FOUNDATION_STRINGX_ISNOTNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x1DDADB10)
#define FOUNDATION_STRINGX_ISNULLOREMPTYAFTERTRIMMED_OFFSET UNITYSDK_OFFSET(0x1DDAE120)
#define FOUNDATION_STRINGX_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x1DDADAC0)
#define FOUNDATION_STRINGX_ISPALINDROME_OFFSET UNITYSDK_OFFSET(0x1DDAE680)
#define FOUNDATION_STRINGX_ISVALIDEMAIL_OFFSET UNITYSDK_OFFSET(0x1DDAE890)
#define FOUNDATION_STRINGX_ISVALIDIPADDRESS_OFFSET UNITYSDK_OFFSET(0x1DDAE930)
#define FOUNDATION_STRINGX_MATCH_OFFSET UNITYSDK_OFFSET(0x1DDADD30)
#define FOUNDATION_STRINGX_PADRIGHTEX_OFFSET UNITYSDK_OFFSET(0x1DDAF610)
#define FOUNDATION_STRINGX_REMOVECHAR_OFFSET UNITYSDK_OFFSET(0x1DDAE430)
#define FOUNDATION_STRINGX_REMOVESPACES_OFFSET UNITYSDK_OFFSET(0x1DDADDC0)
#define FOUNDATION_STRINGX_REPLACERNWITHBR_OFFSET UNITYSDK_OFFSET(0x1DDADE50)
#define FOUNDATION_STRINGX_REVERSE_OFFSET UNITYSDK_OFFSET(0x1DDAD960)
#define FOUNDATION_STRINGX_SKIP_OFFSET UNITYSDK_OFFSET(0x1DDAD8F0)
#define FOUNDATION_STRINGX_STRIPHTML_OFFSET UNITYSDK_OFFSET(0x1DDADBB0)
#define FOUNDATION_STRINGX_SUBSETSTRING_OFFSET UNITYSDK_OFFSET(0x1DDAF360)
#define FOUNDATION_STRINGX_SUBSTRINGFROMXTOY_OFFSET UNITYSDK_OFFSET(0x1DDAE360)
#define FOUNDATION_STRINGX_TAKE_OFFSET UNITYSDK_OFFSET(0x1DDAD810)
#define FOUNDATION_STRINGX_TOCHARLIST_OFFSET UNITYSDK_OFFSET(0x1DDAE1F0)
#define FOUNDATION_STRINGX_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1DDAD5B0)
#define FOUNDATION_STRINGX_TOEMPTYSTRING_OFFSET UNITYSDK_OFFSET(0x1DDADEF0)
#define FOUNDATION_STRINGX_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1DDAD600)
#define FOUNDATION_STRINGX_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x1DDAF200)
#define FOUNDATION_STRINGX_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x1DDAD540)

namespace Foundation
{
	inline static constexpr unsigned int StringX_TypeDefinitionIndex = 8310;

	class StringX : public ::System::Object
	{
	public:
		static ::System::String* F(::System::String* s, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_F_OFFSET))(s, args);
		}

		static ::System::String* Truncate(::System::String* value, ::System::Int32 maxLength)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TRUNCATE_OFFSET))(value, maxLength);
		}

		static ::System::Double ToDouble(::System::String* s)
		{
			return ((::System::Double(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TODOUBLE_OFFSET))(s);
		}

		static ::System::Single ToFloat(::System::String* s)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TOFLOAT_OFFSET))(s);
		}

		static ::System::String* AddWWWFilePrefix(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ADDWWWFILEPREFIX_OFFSET))(s);
		}

		static ::System::Boolean IsDate(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISDATE_OFFSET))(value);
		}

		static ::System::Boolean IsInt(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISINT_OFFSET))(value);
		}

		static ::System::String* Take(::System::String* value, ::System::Int32 count, ::System::Boolean ellipsis)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TAKE_OFFSET))(value, count, ellipsis);
		}

		static ::System::String* Skip(::System::String* value, ::System::Int32 count)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_SKIP_OFFSET))(value, count);
		}

		static ::System::String* Reverse(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_REVERSE_OFFSET))(input);
		}

		static ::System::Boolean IsNullOrEmpty(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISNULLOREMPTY_OFFSET))(value);
		}

		static ::System::Boolean IsNOTNullOrEmpty(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISNOTNULLOREMPTY_OFFSET))(value);
		}

		static ::System::String* Formatted(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_FORMATTED_OFFSET))(format, args);
		}

		static ::System::String* StripHtml(::System::String* html)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_STRIPHTML_OFFSET))(html);
		}

		static ::System::Boolean Match(::System::String* value, ::System::String* pattern)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_MATCH_OFFSET))(value, pattern);
		}

		static ::System::String* RemoveSpaces(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_REMOVESPACES_OFFSET))(value);
		}

		static ::System::String* ReplaceRNWithBr(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_REPLACERNWITHBR_OFFSET))(value);
		}

		static ::System::String* ToEmptyString(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TOEMPTYSTRING_OFFSET))(value);
		}

		static ::System::String* InvertCase(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_INVERTCASE_OFFSET))(s);
		}

		static ::System::Boolean IsNullOrEmptyAfterTrimmed(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISNULLOREMPTYAFTERTRIMMED_OFFSET))(s);
		}

		static ::System::Collections::Generic::List_1<::System::Char>* ToCharList(::System::String* s)
		{
			return ((::System::Collections::Generic::List_1<::System::Char>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TOCHARLIST_OFFSET))(s);
		}

		static ::System::String* SubstringFromXToY(::System::String* s, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_SUBSTRINGFROMXTOY_OFFSET))(s, start, end);
		}

		static ::System::String* RemoveChar(::System::String* s, ::System::Char c)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_REMOVECHAR_OFFSET))(s, c);
		}

		static ::System::Int32 GetWordCount(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_GETWORDCOUNT_OFFSET))(s);
		}

		static ::System::Boolean IsPalindrome(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISPALINDROME_OFFSET))(s);
		}

		static ::System::Boolean IsValidEmail(::System::String* email)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISVALIDEMAIL_OFFSET))(email);
		}

		static ::System::Boolean IsValidIPAddress(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_ISVALIDIPADDRESS_OFFSET))(s);
		}

		static ::System::String* AppendSep(::System::String* s, ::System::String* sep)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDSEP_OFFSET))(s, sep);
		}

		static ::System::String* AppendComma(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDCOMMA_OFFSET))(s);
		}

		static ::System::String* AppendNewLine(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDNEWLINE_OFFSET))(s);
		}

		static ::System::String* AppendHtmlBr(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDHTMLBR_OFFSET))(s);
		}

		static ::System::String* AppendSpace(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDSPACE_OFFSET))(s);
		}

		static ::System::String* AppendHyphen(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDHYPHEN_OFFSET))(s);
		}

		static ::System::String* AppendSep_1(::System::String* s, ::System::Char sep)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDSEP_1_OFFSET))(s, sep);
		}

		static ::System::String* AppendWithSep(::System::String* s, ::System::String* newString, ::System::String* sep)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHSEP_OFFSET))(s, newString, sep);
		}

		static ::System::String* AppendWithSep_1(::System::String* s, ::System::String* newString, ::System::Char sep)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHSEP_1_OFFSET))(s, newString, sep);
		}

		static ::System::String* AppendWithComma(::System::String* s, ::System::String* newString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHCOMMA_OFFSET))(s, newString);
		}

		static ::System::String* AppendWithNewLine(::System::String* s, ::System::String* newString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHNEWLINE_OFFSET))(s, newString);
		}

		static ::System::String* AppendWithHtmlBr(::System::String* s, ::System::String* newString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHHTMLBR_OFFSET))(s, newString);
		}

		static ::System::String* AppendWithHyphen(::System::String* s, ::System::String* newString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHHYPHEN_OFFSET))(s, newString);
		}

		static ::System::String* AppendWithSpace(::System::String* s, ::System::String* newString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_APPENDWITHSPACE_OFFSET))(s, newString);
		}

		static ::System::String* ToTitleCase(::System::String* mText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_TOTITLECASE_OFFSET))(mText);
		}

		static ::System::String* SubsetString(::System::String* s, ::System::String* startText, ::System::String* endText, ::System::Boolean ignoreCase)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_SUBSETSTRING_OFFSET))(s, startText, endText, ignoreCase);
		}

		static ::System::String* PadRightEx(::System::String* s, ::System::Int32 length)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_PADRIGHTEX_OFFSET))(s, length);
		}

		static ::System::Boolean Contains(::System::String* source, ::System::String* dest, ::System::StringComparison comp)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX_CONTAINS_OFFSET))(source, dest, comp);
		}
	};
}
