#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Bson { class BsonWriter; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text::RegularExpressions { class Regex; }

#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1BB52E40)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1BB52820)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1BB52830)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET UNITYSDK_OFFSET(0x1BB528D0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x1BB52BD0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET UNITYSDK_OFFSET(0x1BB525B0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_1_OFFSET UNITYSDK_OFFSET(0x1BB526B0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1BB524F0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB52E80)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int RegexConverter_TypeDefinitionIndex = 7095;

	class RegexConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		// static const ::System::String* PatternName; // 0x0
		// static const ::System::String* OptionsName; // 0x0

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
