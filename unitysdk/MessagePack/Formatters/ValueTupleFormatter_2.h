#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_2_TypeDefinitionIndex = 7475;

	template <typename T1, typename T2>
	class ValueTupleFormatter_2 : public ::System::Object
	{
	public:
	};
}
