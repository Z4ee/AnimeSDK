#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/DateTimeConverterBase.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x18808190)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x18808610)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x18808220)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18808C30)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IsoDateTimeConverter_TypeDefinitionIndex = 9474;

	class IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase
	{
	public:
		::System::String* _dateTimeFormat; // 0x10
		::System::Globalization::CultureInfo* _culture; // 0x18
		::System::Globalization::DateTimeStyles _dateTimeStyles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
