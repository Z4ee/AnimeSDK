#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1BC30CD0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ValidationUtils_TypeDefinitionIndex = 6960;

	class ValidationUtils : public ::System::Object
	{
	public:
		static ::System::Void ArgumentNotNull(::System::Object* value, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET))(value, parameterName);
		}
	};
}
