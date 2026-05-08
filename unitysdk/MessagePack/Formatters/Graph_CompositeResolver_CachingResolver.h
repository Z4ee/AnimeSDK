#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER_ATTACHMOREFORMATTERS_OFFSET UNITYSDK_OFFSET(0x1AFC32F0)
#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER_ATTACHMORERESOLVERS_OFFSET UNITYSDK_OFFSET(0x1AFC34A0)
#define MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC31E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_CompositeResolver_CachingResolver_TypeDefinitionIndex = 27234;

	class Graph_CompositeResolver_CachingResolver : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters; // 0x10
		::Il2CppArray<::MessagePack::IFormatterResolver*>* subResolvers; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* formattersCache; // 0x20

		::System::Void _ctor(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters, ::Il2CppArray<::MessagePack::IFormatterResolver*>* subResolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*, ::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER__CTOR_OFFSET))(this, subFormatters, subResolvers);
		}

		::System::Void AttachMoreFormatters(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER_ATTACHMOREFORMATTERS_OFFSET))(this, formatters);
		}

		::System::Void AttachMoreResolvers(::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPH_COMPOSITERESOLVER_CACHINGRESOLVER_ATTACHMORERESOLVERS_OFFSET))(this, resolvers);
		}
	};
}
