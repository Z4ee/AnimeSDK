#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1D340510)
#define STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1D3401D0)
#define STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1D33FFF0)
#define STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D340550)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreePropertyCopyBatchConverter_TypeDefinitionIndex = 38507;

	class StateTreePropertyCopyBatchConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEPROPERTYCOPYBATCHCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
