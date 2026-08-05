#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1F35C480)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ValidationUtils_TypeDefinitionIndex = 7095;

	class ValidationUtils : public ::System::Object
	{
	public:
		static ::System::Void ArgumentNotNull(::System::Object* value, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET))(value, parameterName);
		}
	};
}
