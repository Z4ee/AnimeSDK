#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GraphPrimitiveEnum_Resolver_EnumAsInFormatter_1_TypeDefinitionIndex = 30185;

	template <typename T>
	class GraphPrimitiveEnum_Resolver_EnumAsInFormatter_1 : public ::System::Object
	{
	public:
		::System::Boolean isFlags; // 0x0
	};
}
