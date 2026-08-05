#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Graph_CollectionFormatterBase_4_TypeDefinitionIndex = 30360;

	template <typename TElement, typename TIntermediate, typename TEnumerator, typename TCollection>
	class Graph_CollectionFormatterBase_4 : public ::System::Object
	{
	public:
	};
}
