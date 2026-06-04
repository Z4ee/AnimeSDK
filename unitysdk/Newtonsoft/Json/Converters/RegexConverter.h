#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Bson { class BsonWriter; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Text::RegularExpressions { class Regex; }

#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1880A830)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1880A350)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1880A380)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET UNITYSDK_OFFSET(0x1880A420)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x1880A6F0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET UNITYSDK_OFFSET(0x1880A0D0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_1_OFFSET UNITYSDK_OFFSET(0x1880A1D0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1880A000)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880A870)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int RegexConverter_TypeDefinitionIndex = 9470;

	class RegexConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasFlag(::System::Text::RegularExpressions::RegexOptions a1, ::System::Text::RegularExpressions::RegexOptions a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void WriteBson(::Newtonsoft::Json::Bson::BsonWriter* a1, ::System::Text::RegularExpressions::Regex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonWriter*, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET))(this, a1, a2);
		}

		::System::Void WriteJson_1(::Newtonsoft::Json::JsonWriter* a1, ::System::Text::RegularExpressions::Regex* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Text::RegularExpressions::Regex*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::JsonSerializer* a2)
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}
	};
}
