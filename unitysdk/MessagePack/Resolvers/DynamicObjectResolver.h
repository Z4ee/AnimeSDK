#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818CD90)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1818CE40)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_TypeDefinitionIndex = 7212;

	class DynamicObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0xA360);
		}
		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0xA368);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0xA370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
