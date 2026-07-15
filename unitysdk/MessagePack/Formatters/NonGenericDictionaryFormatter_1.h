#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericDictionaryFormatter_1_TypeDefinitionIndex = 7364;

	template <typename T>
	class NonGenericDictionaryFormatter_1 : public ::System::Object
	{
	public:
	};
}
