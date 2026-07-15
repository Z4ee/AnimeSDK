#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int KeyValuePairFormatter_2_TypeDefinitionIndex = 7452;

	template <typename TKey, typename TValue>
	class KeyValuePairFormatter_2 : public ::System::Object
	{
	public:
	};
}
