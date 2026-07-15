#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_3_TypeDefinitionIndex = 7468;

	template <typename T1, typename T2, typename T3>
	class TupleFormatter_3 : public ::System::Object
	{
	public:
	};
}
