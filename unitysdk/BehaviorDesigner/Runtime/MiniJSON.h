#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2A8A60)
#define BEHAVIORDESIGNER_RUNTIME_MINIJSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2A8AB0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int MiniJSON_TypeDefinitionIndex = 31697;

	class MiniJSON : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* json)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_DESERIALIZE_OFFSET))(json);
		}

		static ::System::String* Serialize(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_MINIJSON_SERIALIZE_OFFSET))(obj);
		}
	};
}
