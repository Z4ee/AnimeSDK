#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphCustomData_Meta.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class DeserializeFunc; }
namespace MessagePack::Formatters { class GraphUserObject; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_ATTACHEXTRAOBJECTS_OFFSET UNITYSDK_OFFSET(0x1C642D50)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_CURRENTGRAPH_OFFSET UNITYSDK_OFFSET(0x1C643170)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_ISINSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C6430B0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_SHAREDDESERIALIZEOPTION_OFFSET UNITYSDK_OFFSET(0x1C643050)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_SHAREDSERIALIZEOPTION_OFFSET UNITYSDK_OFFSET(0x1C642FF0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1C642510)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_MARKUNINIT_OFFSET UNITYSDK_OFFSET(0x1C6427D0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_RESET_OFFSET UNITYSDK_OFFSET(0x1C642CF0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SET_CURRENTGRAPH_OFFSET UNITYSDK_OFFSET(0x1C6431D0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SET_ISINSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1C643110)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C642500)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__INIT_G____GETFORMATTERS_3_1_OFFSET UNITYSDK_OFFSET(0x1C642AE0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__INIT_G____GETRESOLVERS_3_0_OFFSET UNITYSDK_OFFSET(0x1C642830)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__REFRESHDESERIALIZEOPTION_OFFSET UNITYSDK_OFFSET(0x1C642F30)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__REFRESHSERIALIZEOPTION_OFFSET UNITYSDK_OFFSET(0x1C642E70)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer_TypeDefinitionIndex = 29499;

	class Graph_BinarySerializer : public ::System::Object
	{
	public:
		static ::MessagePack::GraphMemoryStreamBufferWriter** StaticGet__graphBufferWriter()
		{
			return (::MessagePack::GraphMemoryStreamBufferWriter**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x23BD0);
		}
		static ::NodeCanvas::Framework::Graph** StaticGet__currentGraph_k__BackingField()
		{
			return (::NodeCanvas::Framework::Graph**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x23BD8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__sharedDeserializeOption()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x23BE0);
		}
		static ::MessagePack::Formatters::GraphUserObject** StaticGet__sharedUserObject()
		{
			return (::MessagePack::Formatters::GraphUserObject**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x23BE8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__sharedSerializeOption()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x23BF0);
		}
		static ::System::Boolean* StaticGet__isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x7AA0);
		}
		static ::System::Boolean* StaticGet__IsInSerializing_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x7AA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Void MarkUnInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_MARKUNINIT_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_INIT_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_RESET_OFFSET))();
		}

		static ::System::Void AttachExtraObjects(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>* typeHash, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hashIndex, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::DeserializeFunc*>* deserializeCallFuncs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::DeserializeFunc*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_ATTACHEXTRAOBJECTS_OFFSET))(formatters, typeHash, hashIndex, deserializeCallFuncs);
		}

		static ::System::Void _RefreshSerializeOption()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__REFRESHSERIALIZEOPTION_OFFSET))();
		}

		static ::System::Void _RefreshDeserializeOption()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__REFRESHDESERIALIZEOPTION_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_SharedSerializeOption()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_SHAREDSERIALIZEOPTION_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_SharedDeserializeOption()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_SHAREDDESERIALIZEOPTION_OFFSET))();
		}

		static ::System::Boolean get_IsInSerializing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_ISINSERIALIZING_OFFSET))();
		}

		static ::System::Void set_IsInSerializing(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SET_ISINSERIALIZING_OFFSET))(value);
		}

		static ::NodeCanvas::Framework::Graph* get_currentGraph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_GET_CURRENTGRAPH_OFFSET))();
		}

		static ::System::Void set_currentGraph(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SET_CURRENTGRAPH_OFFSET))(value);
		}

		static ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* _Init_g____GetResolvers_3_0(::System::Boolean isContainsAutoGen)
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__INIT_G____GETRESOLVERS_3_0_OFFSET))(isContainsAutoGen);
		}

		static ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* _Init_g____GetFormatters_3_1()
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER__INIT_G____GETFORMATTERS_3_1_OFFSET))();
		}
	};
}
