#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/StringReference.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x164A7910)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x164A7830)
#define NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x164A7870)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringReferenceExtensions_TypeDefinitionIndex = 8253;

	class StringReferenceExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 IndexOf(::Newtonsoft::Json::Utilities::StringReference s, ::System::Char c, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_INDEXOF_OFFSET))(s, c, startIndex, length);
		}

		static ::System::Boolean StartsWith(::Newtonsoft::Json::Utilities::StringReference s, ::System::String* text)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_STARTSWITH_OFFSET))(s, text);
		}

		static ::System::Boolean EndsWith(::Newtonsoft::Json::Utilities::StringReference s, ::System::String* text)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_STRINGREFERENCEEXTENSIONS_ENDSWITH_OFFSET))(s, text);
		}
	};
}
