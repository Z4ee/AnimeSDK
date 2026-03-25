#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x16AA4DC0)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x16AA4E00)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x16AA4ED0)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA4FA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ParamTable_Converter_TypeDefinitionIndex = 29528;

	class ParamTable_Converter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}
	};
}
