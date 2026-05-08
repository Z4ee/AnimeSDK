#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StaticCompositeResolver_Cache_1_TypeDefinitionIndex = 27741;

	template <typename T>
	class StaticCompositeResolver_Cache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(StaticCompositeResolver_Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
