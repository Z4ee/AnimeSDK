#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::Collections::Concurrent { template <typename T> class IProducerConsumerCollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class WaitHandle; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollection_1_TypeDefinitionIndex = 4003;

	template <typename T>
	class BlockingCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::IProducerConsumerCollection_1<T>* _collection; // 0x0
		::System::Int32 _boundedCapacity; // 0x0
		// static const ::System::Int32 NON_BOUNDED = 0xFFFFFFFF; // 0x0
		::System::Threading::SemaphoreSlim* _freeNodes; // 0x0
		::System::Threading::SemaphoreSlim* _occupiedNodes; // 0x0
		::System::Boolean _isDisposed; // 0x0
		::System::Threading::CancellationTokenSource* _consumersCancellationTokenSource; // 0x0
		::System::Threading::CancellationTokenSource* _producersCancellationTokenSource; // 0x0
		::System::Int32 _currentAdders; // 0x0
		// static const ::System::Int32 COMPLETE_ADDING_ON_MASK = 0x80000000; // 0x0
	};
}
