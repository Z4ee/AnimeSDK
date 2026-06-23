#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8030C0)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8031B0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumAsStringResolver_TypeDefinitionIndex = 29918;

	class DynamicEnumAsStringResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringResolver_TypeDefinitionIndex)->GetStaticField(0x23DD0);
		}
		static ::MessagePack::Resolvers::DynamicEnumAsStringResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicEnumAsStringResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringResolver_TypeDefinitionIndex)->GetStaticField(0x23DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
