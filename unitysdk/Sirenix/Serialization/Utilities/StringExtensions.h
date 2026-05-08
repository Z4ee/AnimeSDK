#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_ISNULLORWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C516FE0)
#define SIRENIX_SERIALIZATION_UTILITIES_STRINGEXTENSIONS_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x1C516E20)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 7491;

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
