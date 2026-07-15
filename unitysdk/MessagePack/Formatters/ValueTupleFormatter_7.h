#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_7.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_7_TypeDefinitionIndex = 7480;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class ValueTupleFormatter_7 : public ::System::Object
	{
	public:
	};
}
