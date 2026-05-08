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

#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1C514D10)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1C514CC0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMESTYLES_OFFSET UNITYSDK_OFFSET(0x1C514CA0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1C515020)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1C514D20)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1C514CE0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMESTYLES_OFFSET UNITYSDK_OFFSET(0x1C514CB0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1C514D30)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C515690)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IsoDateTimeConverter_TypeDefinitionIndex = 7092;

	class IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase
	{
	public:
		// static const ::System::String* DefaultDateTimeFormat; // 0x0
		::System::Globalization::CultureInfo* _culture; // 0x10
		::System::String* _dateTimeFormat; // 0x18
		::System::Globalization::DateTimeStyles _dateTimeStyles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Globalization::DateTimeStyles get_DateTimeStyles()
		{
			return ((::System::Globalization::DateTimeStyles(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMESTYLES_OFFSET))(this);
		}

		::System::Void set_DateTimeStyles(::System::Globalization::DateTimeStyles value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMESTYLES_OFFSET))(this, value);
		}

		::System::String* get_DateTimeFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMEFORMAT_OFFSET))(this);
		}

		::System::Void set_DateTimeFormat(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMEFORMAT_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_CULTURE_OFFSET))(this, value);
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
