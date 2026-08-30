#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1811D8B0)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1811D9E0)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1811D210)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1811D200)
#define NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1811D9F0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int HashSetConverter_TypeDefinitionIndex = 9758;

	class HashSetConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_HASHSETCONVERTER_GET_CANWRITE_OFFSET))(this);
		}
	};
}
