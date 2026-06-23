#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"
#include "unitysdk/Sirenix/Serialization/SerializationNode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONDATA_GET_CONTAINSDATA_OFFSET UNITYSDK_OFFSET(0xA7AFB0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONDATA_GET_HASEDITORDATA_OFFSET UNITYSDK_OFFSET(0xA7AFA0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA7AFE0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationData_TypeDefinitionIndex = 7607;

	struct alignas(8) SerializationData
	{
		// static const ::System::String* PrefabModificationsReferencedUnityObjectsFieldName; // 0x0
		// static const ::System::String* PrefabModificationsFieldName; // 0x0
		// static const ::System::String* PrefabFieldName; // 0x0
		::Sirenix::Serialization::DataFormat SerializedFormat; // 0x10
		::Il2CppArray<::System::Byte>* SerializedBytes; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* ReferencedUnityObjects; // 0x20
		::System::String* SerializedBytesString; // 0x28
		::UnityEngine::Object* Prefab; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* PrefabModificationsReferencedUnityObjects; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* PrefabModifications; // 0x40
		::System::Collections::Generic::List_1<::Sirenix::Serialization::SerializationNode>* SerializationNodes; // 0x48

		::System::Boolean get_HasEditorData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONDATA_GET_HASEDITORDATA_OFFSET))(this);
		}

		::System::Boolean get_ContainsData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONDATA_GET_CONTAINSDATA_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONDATA_RESET_OFFSET))(this);
		}
	};
}
