#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1642D000)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1642C910)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1642C7E0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1642CE30)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1642CAD0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1642C780)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1642D040)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 8415;

	class BinaryConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::Il2CppArray<::System::Byte>* GetByteArray(::System::Object* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET))(this, value);
		}

		::System::Void EnsureReflectionObject(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET))(this, t);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::Il2CppArray<::System::Byte>* ReadByteArray(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET))(this, reader);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}
	};
}
