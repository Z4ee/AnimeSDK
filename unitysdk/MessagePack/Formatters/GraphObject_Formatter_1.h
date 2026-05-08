#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class GraphObject_Formatter_1; }
namespace System { class Type; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphObject_Formatter_1_TypeDefinitionIndex = 27543;

	template <typename T>
	class GraphObject_Formatter_1 : public ::System::Object
	{
	public:
	};
}
