#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ValueTupleFormatter_4_TypeDefinitionIndex = 7477;

	template <typename T1, typename T2, typename T3, typename T4>
	class ValueTupleFormatter_4 : public ::System::Object
	{
	public:
	};
}
