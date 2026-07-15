#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_5_TypeDefinitionIndex = 7478;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class ValueTupleFormatter_5 : public ::System::Object
	{
	public:
	};
}
