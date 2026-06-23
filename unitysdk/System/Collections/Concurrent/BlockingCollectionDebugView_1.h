#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollectionDebugView_1_TypeDefinitionIndex = 4005;

	template <typename T>
	class BlockingCollectionDebugView_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::BlockingCollection_1<T>* _blockingCollection; // 0x0
	};
}
