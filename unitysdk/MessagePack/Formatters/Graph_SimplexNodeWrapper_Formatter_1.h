#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { template <typename T> class SimplexNodeWrapper_1; }
namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SimplexNodeWrapper_Formatter_1_TypeDefinitionIndex = 29181;

	template <typename T>
	class Graph_SimplexNodeWrapper_Formatter_1 : public ::System::Object
	{
	public:
	};
}
