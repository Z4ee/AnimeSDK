#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Tuple_6; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_6_TypeDefinitionIndex = 7471;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class TupleFormatter_6 : public ::System::Object
	{
	public:
	};
}
