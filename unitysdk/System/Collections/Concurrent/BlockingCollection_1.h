#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class IProducerConsumerCollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class SemaphoreSlim; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollection_1_TypeDefinitionIndex = 3051;

	template <typename T>
	class BlockingCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* _collection; // 0x0
		::System::Int32 _boundedCapacity; // 0x0
		::System::Threading::SemaphoreSlim* _freeNodes; // 0x0
		::System::Threading::SemaphoreSlim* _occupiedNodes; // 0x0
		::System::Boolean _isDisposed; // 0x0
		::System::Threading::CancellationTokenSource* _consumersCancellationTokenSource; // 0x0
		::System::Threading::CancellationTokenSource* _producersCancellationTokenSource; // 0x0
		::System::Int32 _currentAdders; // 0x0
	};
}
