#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int FourDimensionalArrayFormatter_1_TypeDefinitionIndex = 7399;

	template <typename T>
	class FourDimensionalArrayFormatter_1 : public ::System::Object
	{
	public:
	};
}
