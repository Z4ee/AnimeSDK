#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E2CC0)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E2E30)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StandardResolver_TypeDefinitionIndex = 30392;

	class StandardResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x23C40);
		}
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x23C48);
		}
		static ::MessagePack::Resolvers::StandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x23C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
