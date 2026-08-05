#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E6F7F20)
#define STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1E6F7D40)
#define STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1E6F7B70)
#define STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F69A0)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int TObjectHandleEnumConverter_TypeDefinitionIndex = 39193;

	class TObjectHandleEnumConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_TOBJECTHANDLEENUMCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
