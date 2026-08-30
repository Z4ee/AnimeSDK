#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1811CD30)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1811C2E0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1811C1A0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1811C9E0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1811C470)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1811C070)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1811CD70)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 9755;

	class BinaryConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* GetByteArray(::System::Object* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET))(this, a1);
		}

		::System::Void EnsureReflectionObject(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET))(this, a1);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Object* a3, ::Newtonsoft::Json::JsonSerializer* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* ReadByteArray(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET))(this, a1);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET))(this, a1);
		}
	};
}
