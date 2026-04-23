#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x17AA8880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x17AA8B20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x17AA8B30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x17AA8B40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x17AA8B50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AA8B60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA87C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonFormatterConverter_TypeDefinitionIndex = 8444;

	class JsonFormatterConverter : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader; // 0x10
		::Newtonsoft::Json::Serialization::JsonISerializableContract* _contract; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* _member; // 0x20

		::System::Void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET))(this, reader, contract, member);
		}

		::System::Object* Convert(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET))(this, value, type);
		}

		::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET))(this, value);
		}
	};
}
