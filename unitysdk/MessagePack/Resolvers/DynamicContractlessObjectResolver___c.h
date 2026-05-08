#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }

#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0EFA80)
#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EFAC0)
#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B0EFAD0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicContractlessObjectResolver___c_TypeDefinitionIndex = 26642;

	class DynamicContractlessObjectResolver___c : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicContractlessObjectResolver___c** StaticGet___9()
		{
			return (::MessagePack::Resolvers::DynamicContractlessObjectResolver___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolver___c_TypeDefinitionIndex)->GetStaticField(0x1FA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicAssembly* __cctor_b__4_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
