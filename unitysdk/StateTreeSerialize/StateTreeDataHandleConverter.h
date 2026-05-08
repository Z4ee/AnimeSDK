#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1AF43EC0)
#define STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1AF43C10)
#define STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1AF43A30)
#define STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF43F00)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeDataHandleConverter_TypeDefinitionIndex = 36926;

	class StateTreeDataHandleConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREEDATAHANDLECONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
