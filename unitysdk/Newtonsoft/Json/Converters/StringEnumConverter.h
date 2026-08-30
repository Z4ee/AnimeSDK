#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1BE748A0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x1BE73E90)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET UNITYSDK_OFFSET(0x1BE73E80)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1BE74160)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x1BE73EA0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1BE73EC0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE73EB0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int StringEnumConverter_TypeDefinitionIndex = 9762;

	class StringEnumConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Boolean _AllowIntegerValues_k__BackingField; // 0x10
		::System::Boolean _CamelCaseText_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CamelCaseText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET))(this);
		}

		::System::Boolean get_AllowIntegerValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET))(this);
		}

		::System::Void set_AllowIntegerValues(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET))(this, a1);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}
	};
}
