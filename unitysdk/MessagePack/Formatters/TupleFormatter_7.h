#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Tuple_7; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_7_TypeDefinitionIndex = 7472;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class TupleFormatter_7 : public ::System::Object
	{
	public:
	};
}
