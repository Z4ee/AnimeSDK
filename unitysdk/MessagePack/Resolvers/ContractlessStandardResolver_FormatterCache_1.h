#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ContractlessStandardResolver_FormatterCache_1_TypeDefinitionIndex = 29875;

	template <typename T>
	class ContractlessStandardResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ContractlessStandardResolver_FormatterCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
