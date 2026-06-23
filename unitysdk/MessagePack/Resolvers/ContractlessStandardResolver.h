#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D40C530)
#define MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40C6A0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ContractlessStandardResolver_TypeDefinitionIndex = 29874;

	class ContractlessStandardResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x24500);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x24508);
		}
		static ::MessagePack::Resolvers::ContractlessStandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::ContractlessStandardResolver**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_TypeDefinitionIndex)->GetStaticField(0x24510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CONTRACTLESSSTANDARDRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
