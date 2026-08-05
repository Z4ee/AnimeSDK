#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_STRINGUTILS_CAPITALIZEFIRST_OFFSET UNITYSDK_OFFSET(0x1EBA0A30)
#define PARADOXNOTION_STRINGUTILS_CAPLENGTH_OFFSET UNITYSDK_OFFSET(0x1EBA0B20)
#define PARADOXNOTION_STRINGUTILS_FORMATERROR_OFFSET UNITYSDK_OFFSET(0x1EB99520)
#define PARADOXNOTION_STRINGUTILS_GETALPHABETLETTER_OFFSET UNITYSDK_OFFSET(0x1EBA0D40)
#define PARADOXNOTION_STRINGUTILS_GETCAPITALS_OFFSET UNITYSDK_OFFSET(0x1EBA0B90)
#define PARADOXNOTION_STRINGUTILS_GETSTRINGWITHININNER_OFFSET UNITYSDK_OFFSET(0x1EBA0F00)
#define PARADOXNOTION_STRINGUTILS_GETSTRINGWITHINOUTER_OFFSET UNITYSDK_OFFSET(0x1EBA0E90)
#define PARADOXNOTION_STRINGUTILS_REPLACEWITHIN_OFFSET UNITYSDK_OFFSET(0x1EBA1050)
#define PARADOXNOTION_STRINGUTILS_SCORESEARCHMATCH_OFFSET UNITYSDK_OFFSET(0x1EBA11D0)
#define PARADOXNOTION_STRINGUTILS_SEARCHMATCH_OFFSET UNITYSDK_OFFSET(0x1EBA1540)
#define PARADOXNOTION_STRINGUTILS_SPLITCAMELCASE_OFFSET UNITYSDK_OFFSET(0x1EBA0760)
#define PARADOXNOTION_STRINGUTILS_TOSTRINGADVANCED_OFFSET UNITYSDK_OFFSET(0x1EB94AB0)
#define PARADOXNOTION_STRINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA1990)

namespace ParadoxNotion
{
	inline static constexpr unsigned int StringUtils_TypeDefinitionIndex = 30333;

	class StringUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_splitCaseCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StringUtils_TypeDefinitionIndex)->GetStaticField(0x261A0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_CHAR_SPACE_ARRAY()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringUtils_TypeDefinitionIndex)->GetStaticField(0x261A8);
		}
		// static const ::System::String* SPACE; // 0x0
		// static const ::System::String* ALPHABET; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* SplitCamelCase(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_SPLITCAMELCASE_OFFSET))(s);
		}

		static ::System::String* CapitalizeFirst(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_CAPITALIZEFIRST_OFFSET))(s);
		}

		static ::System::String* CapLength(::System::String* s, ::System::Int32 max)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_CAPLENGTH_OFFSET))(s, max);
		}

		static ::System::String* GetCapitals(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_GETCAPITALS_OFFSET))(s);
		}

		static ::System::String* FormatError(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_FORMATERROR_OFFSET))(input);
		}

		static ::System::String* GetAlphabetLetter(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_GETALPHABETLETTER_OFFSET))(index);
		}

		static ::System::String* GetStringWithinOuter(::System::String* input, ::System::Char from, ::System::Char to)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_GETSTRINGWITHINOUTER_OFFSET))(input, from, to);
		}

		static ::System::String* GetStringWithinInner(::System::String* input, ::System::Char from, ::System::Char to)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_GETSTRINGWITHININNER_OFFSET))(input, from, to);
		}

		static ::System::String* ReplaceWithin(::System::String* text, ::System::Char startChar, ::System::Char endChar, ::System::Func_2<::System::String*, ::System::String*>* Process)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::System::Char, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_REPLACEWITHIN_OFFSET))(text, startChar, endChar, Process);
		}

		static ::System::Single ScoreSearchMatch(::System::String* input, ::System::String* leafName, ::System::String* categoryName)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_SCORESEARCHMATCH_OFFSET))(input, leafName, categoryName);
		}

		static ::System::Boolean SearchMatch(::System::String* input, ::System::String* leafName, ::System::String* categoryName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_SEARCHMATCH_OFFSET))(input, leafName, categoryName);
		}

		static ::System::String* ToStringAdvanced(::System::Object* o)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_STRINGUTILS_TOSTRINGADVANCED_OFFSET))(o);
		}
	};
}
