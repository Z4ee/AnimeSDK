#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AnonymousDeserializeFunc_1_TypeDefinitionIndex = 28118;

	template <typename T>
	class AnonymousDeserializeFunc_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
