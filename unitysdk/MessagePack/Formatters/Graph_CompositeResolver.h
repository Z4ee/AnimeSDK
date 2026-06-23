#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class Graph_CompositeResolver_CachingResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D1DF7C0)
#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1D1DF830)
#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1DF6D0)
#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF8A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_CompositeResolver_TypeDefinitionIndex = 30867;

	class Graph_CompositeResolver : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_EmptyFormattersByType()
		{
			return (::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_CompositeResolver_TypeDefinitionIndex)->GetStaticField(0x24920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER__CCTOR_OFFSET))();
		}

		static ::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver* Create(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver*(*)(::System::Collections::Generic::IReadOnlyList_1<::MessagePack::Formatters::IMessagePackFormatter*>*, ::System::Collections::Generic::IReadOnlyList_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_OFFSET))(formatters, resolvers);
		}

		static ::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver* Create_1(::Il2CppArray<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver*(*)(::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_1_OFFSET))(resolvers);
		}

		static ::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver* Create_2(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::MessagePack::Formatters::Graph_CompositeResolver_CachingResolver*(*)(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CREATE_2_OFFSET))(formatters);
		}
	};
}
