#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x18809EA0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x188093E0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x188098E0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x18809680)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18809F80)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18809F70)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int KeyValuePairConverter_TypeDefinitionIndex = 9468;

	class KeyValuePairConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>** StaticGet_ReflectionObjectPerType()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairConverter_TypeDefinitionIndex)->GetStaticField(0x2D750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* InitializeReflectionObject(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET))(a1);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}
	};
}
