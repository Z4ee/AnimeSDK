#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ThreeDimensionalArrayFormatter_1_TypeDefinitionIndex = 7398;

	template <typename T>
	class ThreeDimensionalArrayFormatter_1 : public ::System::Object
	{
	public:
	};
}
