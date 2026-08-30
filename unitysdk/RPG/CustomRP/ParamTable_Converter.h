#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1C6B49F0)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1C6B4A30)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1C6B4B00)
#define RPG_CUSTOMRP_PARAMTABLE_CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B4BD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ParamTable_Converter_TypeDefinitionIndex = 37236;

	class ParamTable_Converter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_CANCONVERT_OFFSET))(this, a1);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}
	};
}
