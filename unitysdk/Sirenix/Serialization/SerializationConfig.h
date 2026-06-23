#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DebugContext; }
namespace Sirenix::Serialization { class ISerializationPolicy; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E834F50)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_SERIALIZATIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1E834D70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1E834C90)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E835080)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_SERIALIZATIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1E834EA0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E834C60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationConfig_TypeDefinitionIndex = 7529;

	class SerializationConfig : public ::System::Object
	{
	public:
		::Sirenix::Serialization::DebugContext* debugContext; // 0x10
		::System::Object* LOCK; // 0x18
		::Sirenix::Serialization::ISerializationPolicy* serializationPolicy; // 0x20
		::System::Boolean SharedDictionaryComparer; // 0x28
		::System::Boolean AllowDeserializeInvalidData; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::ISerializationPolicy* get_SerializationPolicy()
		{
			return ((::Sirenix::Serialization::ISerializationPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_SERIALIZATIONPOLICY_OFFSET))(this);
		}

		::System::Void set_SerializationPolicy(::Sirenix::Serialization::ISerializationPolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_SERIALIZATIONPOLICY_OFFSET))(this, value);
		}

		::Sirenix::Serialization::DebugContext* get_DebugContext()
		{
			return ((::Sirenix::Serialization::DebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_GET_DEBUGCONTEXT_OFFSET))(this);
		}

		::System::Void set_DebugContext(::Sirenix::Serialization::DebugContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DebugContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_SET_DEBUGCONTEXT_OFFSET))(this, value);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONFIG_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
