#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnsafeBlitFormatterBase_1_TypeDefinitionIndex = 29600;

	template <typename T>
	class UnsafeBlitFormatterBase_1 : public ::System::Object
	{
	public:
	};
}
