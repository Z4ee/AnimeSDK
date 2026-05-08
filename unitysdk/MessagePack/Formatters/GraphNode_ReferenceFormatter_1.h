#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphNode_ReferenceFormatter_1_TypeDefinitionIndex = 27609;

	template <typename T>
	class GraphNode_ReferenceFormatter_1 : public ::System::Object
	{
	public:
	};
}
