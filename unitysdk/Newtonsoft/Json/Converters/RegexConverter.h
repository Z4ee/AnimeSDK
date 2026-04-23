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

#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x17A5BB60)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x17A5B680)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A5B6B0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET UNITYSDK_OFFSET(0x17A5B750)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x17A5BA20)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET UNITYSDK_OFFSET(0x17A5B410)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_1_OFFSET UNITYSDK_OFFSET(0x17A5B510)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A5B350)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5BBA0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int RegexConverter_TypeDefinitionIndex = 8567;

	class RegexConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Boolean HasFlag(::System::Text::RegularExpressions::RegexOptions options, ::System::Text::RegularExpressions::RegexOptions flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET))(this, options, flag);
		}

		::System::Void WriteBson(::Newtonsoft::Json::Bson::BsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Bson::BsonWriter*, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET))(this, writer, regex);
		}

		::System::Void WriteJson_1(::Newtonsoft::Json::JsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Text::RegularExpressions::Regex*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_1_OFFSET))(this, writer, regex, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET))(this, reader);
		}

		::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET))(this, reader, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
