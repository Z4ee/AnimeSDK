#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1EEFED90)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ValidationUtils_TypeDefinitionIndex = 9628;

	class ValidationUtils : public ::System::Object
	{
	public:
		static ::System::Void ArgumentNotNull(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET))(a1, a2);
		}
	};
}
