#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_RESOLVERS_GRAPHNODE_AUTOGEN_FORMATTER_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2F20)
#define MESSAGEPACK_RESOLVERS_GRAPHNODE_AUTOGEN_FORMATTER_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2E90)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GraphNode_AutoGen_Formatter_Resolver_TypeDefinitionIndex = 30413;

	class GraphNode_AutoGen_Formatter_Resolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::GraphNode_AutoGen_Formatter_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GraphNode_AutoGen_Formatter_Resolver**)Il2CppClass::FromTypeDefinitionIndex(GraphNode_AutoGen_Formatter_Resolver_TypeDefinitionIndex)->GetStaticField(0x25440);
		}
		::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* formattersCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHNODE_AUTOGEN_FORMATTER_RESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHNODE_AUTOGEN_FORMATTER_RESOLVER__CCTOR_OFFSET))();
		}
	};
}
