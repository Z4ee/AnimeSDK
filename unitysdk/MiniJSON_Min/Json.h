#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MINIJSON_MIN_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE61200)
#define MINIJSON_MIN_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BE613C0)

namespace MiniJSON_Min
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 40044;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_DESERIALIZE_OFFSET))(a1);
		}

		static ::System::String* Serialize(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MINIJSON_MIN_JSON_SERIALIZE_OFFSET))(a1);
		}
	};
}
