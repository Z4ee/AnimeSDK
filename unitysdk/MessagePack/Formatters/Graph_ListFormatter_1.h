#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_ListFormatter_1_TypeDefinitionIndex = 29782;

	template <typename T>
	class Graph_ListFormatter_1 : public ::System::Object
	{
	public:
	};
}
