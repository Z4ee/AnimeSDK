#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { template <typename T> class SetVariable_1; }
namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_SetVariable_Formatter_1_TypeDefinitionIndex = 30214;

	template <typename T>
	class Graph_SetVariable_Formatter_1 : public ::System::Object
	{
	public:
	};
}
