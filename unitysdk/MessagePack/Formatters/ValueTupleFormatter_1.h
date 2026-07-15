#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_1_TypeDefinitionIndex = 7474;

	template <typename T1>
	class ValueTupleFormatter_1 : public ::System::Object
	{
	public:
	};
}
