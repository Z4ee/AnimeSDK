#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ReadOnlySequenceFormatter_1_TypeDefinitionIndex = 7340;

	template <typename T>
	class ReadOnlySequenceFormatter_1 : public ::System::Object
	{
	public:
	};
}
