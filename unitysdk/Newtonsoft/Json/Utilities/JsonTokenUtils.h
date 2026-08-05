#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F6E7C50)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET UNITYSDK_OFFSET(0x1F6E7C70)
#define NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET UNITYSDK_OFFSET(0x1F6E7C60)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int JsonTokenUtils_TypeDefinitionIndex = 7062;

	class JsonTokenUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsEndToken(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISENDTOKEN_OFFSET))(token);
		}

		static ::System::Boolean IsStartToken(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISSTARTTOKEN_OFFSET))(token);
		}

		static ::System::Boolean IsPrimitiveToken(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_JSONTOKENUTILS_ISPRIMITIVETOKEN_OFFSET))(token);
		}
	};
}
