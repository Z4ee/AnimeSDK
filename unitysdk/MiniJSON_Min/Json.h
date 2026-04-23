#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MINIJSON_MIN_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A4C870)
#define MINIJSON_MIN_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17A4C990)

namespace MiniJSON_Min
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 37645;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* json)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_DESERIALIZE_OFFSET))(json);
		}

		static ::System::String* Serialize(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZE_OFFSET))(obj);
		}
	};
}
