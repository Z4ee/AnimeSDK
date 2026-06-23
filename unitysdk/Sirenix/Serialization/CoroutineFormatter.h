#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace System { class Type; }
namespace UnityEngine { class Coroutine; }

#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E480500)
#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER_GET_SERIALIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E4804C0)
#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E480520)
#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E480510)
#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SIRENIX_SERIALIZATION_IFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E4804F0)
#define SIRENIX_SERIALIZATION_COROUTINEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E480530)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CoroutineFormatter_TypeDefinitionIndex = 7578;

	class CoroutineFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_SerializedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER_GET_SERIALIZEDTYPE_OFFSET))(this);
		}

		::System::Object* Sirenix_Serialization_IFormatter_Deserialize(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Object*(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SIRENIX_SERIALIZATION_IFORMATTER_DESERIALIZE_OFFSET))(this, reader);
		}

		::UnityEngine::Coroutine* Deserialize(::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER_DESERIALIZE_OFFSET))(this, reader);
		}

		::System::Void Serialize(::System::Object* value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SERIALIZE_OFFSET))(this, value, writer);
		}

		::System::Void Serialize_1(::UnityEngine::Coroutine* value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COROUTINEFORMATTER_SERIALIZE_1_OFFSET))(this, value, writer);
		}
	};
}
