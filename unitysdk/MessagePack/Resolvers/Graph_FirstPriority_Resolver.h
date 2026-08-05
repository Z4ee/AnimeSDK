#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class Graph_BinderConnection_Formatter; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1E6D31E0)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3880)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CREATEGENERICFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E6D3700)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D2FF0)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__GETORCREATEMYFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E6D3090)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int Graph_FirstPriority_Resolver_TypeDefinitionIndex = 30831;

	class Graph_FirstPriority_Resolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::Graph_FirstPriority_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::Graph_FirstPriority_Resolver**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x25450);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_s_PriorityFormatters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x25458);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_genericFormatterTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x25460);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet__HandWriteTypedFormatters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x25468);
		}
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* _formatters; // 0x10
		::MessagePack::Formatters::Graph_BinderConnection_Formatter* BinderConnectionFormatter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CCTOR_OFFSET))();
		}

		::MessagePack::Formatters::IMessagePackFormatter* _GetOrCreateMyFormatter(::System::Type* type, ::System::Func_1<::MessagePack::Formatters::IMessagePackFormatter*>* fmtCreater)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*, ::System::Func_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__GETORCREATEMYFORMATTER_OFFSET))(this, type, fmtCreater);
		}

		::MessagePack::Formatters::IMessagePackFormatter* GetFormatterDynamic(::System::Type* checkType)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER_GETFORMATTERDYNAMIC_OFFSET))(this, checkType);
		}

		::MessagePack::Formatters::IMessagePackFormatter* _CreateGenericFormatter(::System::Type* genericFormatter, ::System::Reflection::TypeInfo* ti)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CREATEGENERICFORMATTER_OFFSET))(this, genericFormatter, ti);
		}
	};
}
