#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int StaticEnumByteFormatter_1_TypeDefinitionIndex = 7306;

	template <typename T>
	class StaticEnumByteFormatter_1 : public ::System::Object
	{
	public:
	};
}
