#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_4_TypeDefinitionIndex = 7469;

	template <typename T1, typename T2, typename T3, typename T4>
	class TupleFormatter_4 : public ::System::Object
	{
	public:
	};
}
