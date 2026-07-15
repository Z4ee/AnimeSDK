#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StaticNullableFormatter_1_TypeDefinitionIndex = 7403;

	template <typename T>
	class StaticNullableFormatter_1 : public ::System::Object
	{
	public:
		::MessagePack::Formatters::IMessagePackFormatter_1<T>* underlyingFormatter; // 0x0
	};
}
