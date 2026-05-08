#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework::Internal { class GraphSource; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsSerializer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A85FEA0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_FLUSHMEM_OFFSET UNITYSDK_OFFSET(0x1A85F920)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A85F990)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A85F8B0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer_V2_TypeDefinitionIndex = 27526;

	class Graph_BinarySerializer_V2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_V2_TypeDefinitionIndex)->GetStaticField(0x202E0);
		}
		static ::ParadoxNotion::Serialization::FullSerializer::fsSerializer** StaticGet_s_serializer()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsSerializer**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_V2_TypeDefinitionIndex)->GetStaticField(0x202E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2__CCTOR_OFFSET))();
		}

		static ::System::Void FlushMem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_FLUSHMEM_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Serialize(::NodeCanvas::Framework::Internal::GraphSource* value, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::NodeCanvas::Framework::Internal::GraphSource*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_SERIALIZE_OFFSET))(value, references);
		}

		static ::NodeCanvas::Framework::Internal::GraphSource* Deserialize(::Il2CppArray<::System::Byte>* bytes, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityReferences, ::NodeCanvas::Framework::Internal::GraphSource* existingInstance)
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::Il2CppArray<::System::Byte>*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_V2_DESERIALIZE_OFFSET))(bytes, unityReferences, existingInstance);
		}
	};
}
