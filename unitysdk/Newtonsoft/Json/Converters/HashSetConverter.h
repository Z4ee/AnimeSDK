#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x17A59370)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x17A593E0)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x17A58DD0)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x17A58DC0)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A593F0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int HashSetConverter_TypeDefinitionIndex = 8564;

	class HashSetConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_GET_CANWRITE_OFFSET))(this);
		}
	};
}
