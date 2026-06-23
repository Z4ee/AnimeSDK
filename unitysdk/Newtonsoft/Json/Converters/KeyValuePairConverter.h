#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1E2B3CD0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2B31A0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1E2B36F0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1E2B34B0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3DF0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3DE0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int KeyValuePairConverter_TypeDefinitionIndex = 7225;

	class KeyValuePairConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>** StaticGet_ReflectionObjectPerType()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairConverter_TypeDefinitionIndex)->GetStaticField(0x6070);
		}
		// static const ::System::String* KeyName; // 0x0
		// static const ::System::String* ValueName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::ReflectionObject* InitializeReflectionObject(::System::Type* t)
		{
			return ((::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET))(t);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
