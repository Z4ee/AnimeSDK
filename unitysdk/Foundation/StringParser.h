#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_STRINGPARSER_PARSETODICTIONARY_OFFSET UNITYSDK_OFFSET(0x1E4F60A0)
#define FOUNDATION_STRINGPARSER_PARSETOINTLIST_OFFSET UNITYSDK_OFFSET(0x1E4F5EE0)

namespace Foundation
{
	inline static constexpr unsigned int StringParser_TypeDefinitionIndex = 7967;

	class StringParser : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>* ParseToIntList(::System::String* input, ::System::Char pairSeparator)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGPARSER_PARSETOINTLIST_OFFSET))(input, pairSeparator);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ParseToDictionary(::System::String* input, ::System::Char pairSeparator, ::System::Char keyValueSeparator)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::String*, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGPARSER_PARSETODICTIONARY_OFFSET))(input, pairSeparator, keyValueSeparator);
		}
	};
}
