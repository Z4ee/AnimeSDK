#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1F731D00)
#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F731DC0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DateTimeConverterBase_TypeDefinitionIndex = 7226;

	class DateTimeConverterBase : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
