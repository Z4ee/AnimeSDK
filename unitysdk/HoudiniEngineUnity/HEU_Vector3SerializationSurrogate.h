#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x197DE8C0)
#define HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x197DEA80)
#define HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x197DED30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Vector3SerializationSurrogate_TypeDefinitionIndex = 38217;

	class HEU_Vector3SerializationSurrogate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializationSurrogate_GetObjectData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* System_Runtime_Serialization_ISerializationSurrogate_SetObjectData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3, ::System::Runtime::Serialization::ISurrogateSelector* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VECTOR3SERIALIZATIONSURROGATE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
