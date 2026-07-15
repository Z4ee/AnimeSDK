#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int LRUCache_2_CacheOperation_TypeDefinitionIndex = 33857;

	template <typename TKey, typename TValue>
	class LRUCache_2_CacheOperation : public ::System::MulticastDelegate
	{
	public:
	};
}
