#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AnonymousSerializeFunc_1_TypeDefinitionIndex = 30776;

	template <typename T>
	class AnonymousSerializeFunc_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
