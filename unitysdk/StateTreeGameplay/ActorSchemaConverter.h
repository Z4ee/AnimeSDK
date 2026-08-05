#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E505140)
#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E505300)
#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1E504D20)
#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1E504AA0)
#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5051B0)
#define STATETREEGAMEPLAY_ACTORSCHEMACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5052F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ActorSchemaConverter_TypeDefinitionIndex = 52563;

	class ActorSchemaConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMACONVERTER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
