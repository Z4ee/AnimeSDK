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
	inline static constexpr unsigned int UnsafeBlitFormatterBase_2_TypeDefinitionIndex = 9862;

	template <typename T, typename TReverseEndianessHelper>
	class UnsafeBlitFormatterBase_2 : public ::System::Object
	{
	public:
	};
}
