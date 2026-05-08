#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int FourDimensionalArrayFormatter_1_TypeDefinitionIndex = 28105;

	template <typename T>
	class FourDimensionalArrayFormatter_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 ArrayLength = 0x5; // 0x0
	};
}
