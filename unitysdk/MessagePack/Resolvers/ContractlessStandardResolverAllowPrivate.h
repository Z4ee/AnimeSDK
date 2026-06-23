#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C62A520)
#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C62A690)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ContractlessStandardResolverAllowPrivate_TypeDefinitionIndex = 29914;

	class ContractlessStandardResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::ContractlessStandardResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::ContractlessStandardResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x23AE0);
		}
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x23AE8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x23AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}
	};
}
