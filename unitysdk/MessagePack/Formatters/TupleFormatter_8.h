#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Tuple_8; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TupleFormatter_8_TypeDefinitionIndex = 7473;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest>
	class TupleFormatter_8 : public ::System::Object
	{
	public:
	};
}
