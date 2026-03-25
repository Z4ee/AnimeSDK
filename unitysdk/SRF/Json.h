#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRF_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18468780)
#define SRF_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18468940)

namespace SRF
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 27642;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* json)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRF_JSON_DESERIALIZE_OFFSET))(json);
		}

		static ::System::String* Serialize(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZE_OFFSET))(obj);
		}
	};
}
