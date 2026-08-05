#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E6E8D90)
#define STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1E6E8A80)
#define STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1E6E87F0)
#define STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E8DD0)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int FInstancedStructConverter_TypeDefinitionIndex = 39188;

	class FInstancedStructConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_FINSTANCEDSTRUCTCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
