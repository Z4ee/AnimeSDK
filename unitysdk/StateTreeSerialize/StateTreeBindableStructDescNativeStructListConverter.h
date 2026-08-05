#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E6EBC00)
#define STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1E6EB5C0)
#define STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1E6EB390)
#define STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EBC40)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeBindableStructDescNativeStructListConverter_TypeDefinitionIndex = 39177;

	class StateTreeBindableStructDescNativeStructListConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEBINDABLESTRUCTDESCNATIVESTRUCTLISTCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
