#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T> class Tuple_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_1_TypeDefinitionIndex = 7466;

	template <typename T1>
	class TupleFormatter_1 : public ::System::Object
	{
	public:
	};
}
