#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class String; }
namespace System { template <typename T> class Lazy_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCC72C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC72B0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicContractlessObjectResolver_TypeDefinitionIndex = 30644;

	class DynamicContractlessObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicContractlessObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicContractlessObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x241A0);
		}
		static ::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>** StaticGet_DynamicAssembly()
		{
			return (::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicContractlessObjectResolver_TypeDefinitionIndex)->GetStaticField(0x241A8);
		}
		// static const ::System::String* ModuleName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICCONTRACTLESSOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
