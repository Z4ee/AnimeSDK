#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC46B30)
#define MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC46B70)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GraphPrimitiveEnum_Resolver_TypeDefinitionIndex = 30804;

	class GraphPrimitiveEnum_Resolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::GraphPrimitiveEnum_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GraphPrimitiveEnum_Resolver**)Il2CppClass::FromTypeDefinitionIndex(GraphPrimitiveEnum_Resolver_TypeDefinitionIndex)->GetStaticField(0x23C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CTOR_OFFSET))(this);
		}
	};
}
