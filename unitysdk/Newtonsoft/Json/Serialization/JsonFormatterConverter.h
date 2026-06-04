#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x18856A20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18856CF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x18856D00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x18856D10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x18856D20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18856D30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18856960)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonFormatterConverter_TypeDefinitionIndex = 9347;

	class JsonFormatterConverter : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::JsonProperty* _member; // 0x10
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader; // 0x18
		::Newtonsoft::Json::Serialization::JsonISerializableContract* _contract; // 0x20

		::System::Void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* a1, ::Newtonsoft::Json::Serialization::JsonISerializableContract* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Convert(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ToBoolean(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::Object* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET))(this, a1);
		}
	};
}
