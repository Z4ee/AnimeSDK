#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Text { class StringBuilder; }

#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1BE63E00)
#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BE64570)
#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET UNITYSDK_OFFSET(0x1BE650E0)
#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1BE63900)
#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1BE63750)
#define MINIJSON_MIN_JSON_SERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE62130)
#define MINIJSON_MIN_JSON_SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE636D0)

namespace MiniJSON_Min
{
	inline static constexpr unsigned int Json_Serializer_TypeDefinitionIndex = 40047;

	class Json_Serializer : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* builder; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::String* Serialize(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZE_OFFSET))(a1);
		}

		::System::Void SerializeValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET))(this, a1);
		}

		::System::Void SerializeObject(::System::Collections::IDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET))(this, a1);
		}

		::System::Void SerializeArray(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET))(this, a1);
		}

		::System::Void SerializeString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZESTRING_OFFSET))(this, a1);
		}

		::System::Void SerializeOther(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET))(this, a1);
		}
	};
}
