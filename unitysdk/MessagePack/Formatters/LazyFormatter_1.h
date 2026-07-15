#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T> class Lazy_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int LazyFormatter_1_TypeDefinitionIndex = 7463;

	template <typename T>
	class LazyFormatter_1 : public ::System::Object
	{
	public:
	};
}
