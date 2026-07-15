#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_6.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_6_TypeDefinitionIndex = 7479;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class ValueTupleFormatter_6 : public ::System::Object
	{
	public:
	};
}
