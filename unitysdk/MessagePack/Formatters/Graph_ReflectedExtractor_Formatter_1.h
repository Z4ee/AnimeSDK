#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { template <typename T> class ReflectedExtractorNodeWrapper_1; }
namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_ReflectedExtractor_Formatter_1_TypeDefinitionIndex = 30590;

	template <typename T>
	class Graph_ReflectedExtractor_Formatter_1 : public ::System::Object
	{
	public:
	};
}
