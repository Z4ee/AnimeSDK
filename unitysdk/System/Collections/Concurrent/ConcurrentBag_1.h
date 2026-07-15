#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1_WorkStealingQueue; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentBag_1_TypeDefinitionIndex = 3048;

	template <typename T>
	class ConcurrentBag_1 : public ::System::Object
	{
	public:
		::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::ConcurrentBag_1_WorkStealingQueue<T>*>* _locals; // 0x0
		::System::Collections::Concurrent::ConcurrentBag_1_WorkStealingQueue<T>* _workStealingQueues; // 0x0
	};
}
