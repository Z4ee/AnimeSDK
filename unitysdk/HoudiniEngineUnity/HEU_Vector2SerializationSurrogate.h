#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x84A4100)
#define HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x84A4270)
#define HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x84A4470)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Vector2SerializationSurrogate_TypeDefinitionIndex = 37611;

	class HEU_Vector2SerializationSurrogate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET))(this, obj, info, context);
		}

		::System::Object* System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector* selector)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR2SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET))(this, obj, info, context, selector);
		}
	};
}
