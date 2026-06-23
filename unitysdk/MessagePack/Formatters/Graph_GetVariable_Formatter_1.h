#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { template <typename T> class GetVariable_1; }
namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_GetVariable_Formatter_1_TypeDefinitionIndex = 29120;

	template <typename T>
	class Graph_GetVariable_Formatter_1 : public ::System::Object
	{
	public:
	};
}
