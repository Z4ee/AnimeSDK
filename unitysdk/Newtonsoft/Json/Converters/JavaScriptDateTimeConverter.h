#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/DateTimeConverterBase.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A5A1D0)
#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A59EE0)
#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5A670)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int JavaScriptDateTimeConverter_TypeDefinitionIndex = 8572;

	class JavaScriptDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}
	};
}
