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

#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x17A59400)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A598A0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A59490)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A59ED0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IsoDateTimeConverter_TypeDefinitionIndex = 8571;

	class IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase
	{
	public:
		::System::Globalization::CultureInfo* _culture; // 0x10
		::System::String* _dateTimeFormat; // 0x18
		::System::Globalization::DateTimeStyles _dateTimeStyles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}
	};
}
