#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Tuple_5; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_5_TypeDefinitionIndex = 7470;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class TupleFormatter_5 : public ::System::Object
	{
	public:
	};
}
