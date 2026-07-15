#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRF_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CECDB80)
#define SRF_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CECDCF0)

namespace SRF
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 33919;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRF_JSON_DESERIALIZE_OFFSET))(a1);
		}

		static ::System::String* Serialize(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZE_OFFSET))(a1);
		}
	};
}
