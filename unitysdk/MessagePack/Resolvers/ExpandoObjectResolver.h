#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1FE6B0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ExpandoObjectResolver_TypeDefinitionIndex = 28241;

	class ExpandoObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1FD90);
		}
		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1FD98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
