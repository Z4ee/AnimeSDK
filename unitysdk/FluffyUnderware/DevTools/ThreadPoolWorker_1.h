#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::DevTools { class QueuedCallback; }
namespace FluffyUnderware::DevTools { template <typename T> class LoopState_1; }
namespace FluffyUnderware::DevTools { template <typename T> class SimplePool_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitCallback; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ThreadPoolWorker_1_TypeDefinitionIndex = 28985;

	template <typename T>
	class ThreadPoolWorker_1 : public ::System::Object
	{
	public:
		::FluffyUnderware::DevTools::SimplePool_1<::FluffyUnderware::DevTools::QueuedCallback*>* queuedCallbackPool; // 0x0
		::FluffyUnderware::DevTools::SimplePool_1<::FluffyUnderware::DevTools::LoopState_1<T>*>* loopStatePool; // 0x0
		::System::Int32 _remainingWorkItems; // 0x0
		::System::Threading::ManualResetEvent* _done; // 0x0
		::System::Threading::WaitCallback* handleWorkItemCallBack; // 0x0
		::System::Threading::WaitCallback* handleLoopCallBack; // 0x0
	};
}
