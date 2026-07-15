#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_2_TypeDefinitionIndex = 7467;

	template <typename T1, typename T2>
	class TupleFormatter_2 : public ::System::Object
	{
	public:
	};
}
