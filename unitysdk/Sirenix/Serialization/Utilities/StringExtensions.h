#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_ISNULLORWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E84ADA0)
#define SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x1E84ABE0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 7623;

	class StringExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToTitleCase(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_TOTITLECASE_OFFSET))(input);
		}

		static ::System::Boolean IsNullOrWhitespace(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_ISNULLORWHITESPACE_OFFSET))(str);
		}
	};
}
