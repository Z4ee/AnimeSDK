#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET UNITYSDK_OFFSET(0x1887B0F0)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET UNITYSDK_OFFSET(0x18861480)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET UNITYSDK_OFFSET(0x1887B100)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JsonTokenUtils_TypeDefinitionIndex = 9283;

	class JsonTokenUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsEndToken(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean IsStartToken(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean IsPrimitiveToken(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET))(a1);
		}
	};
}
