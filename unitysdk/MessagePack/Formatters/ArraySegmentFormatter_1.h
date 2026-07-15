#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ArraySegmentFormatter_1_TypeDefinitionIndex = 7341;

	template <typename T>
	class ArraySegmentFormatter_1 : public ::System::Object
	{
	public:
	};
}
