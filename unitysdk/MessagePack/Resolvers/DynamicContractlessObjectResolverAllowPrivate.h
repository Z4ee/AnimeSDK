#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D525B60)
#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D525B50)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicContractlessObjectResolverAllowPrivate_TypeDefinitionIndex = 30287;

	class DynamicContractlessObjectResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicContractlessObjectResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicContractlessObjectResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x245E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}
	};
}
