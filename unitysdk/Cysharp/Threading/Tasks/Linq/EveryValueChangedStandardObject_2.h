#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryValueChangedStandardObject_2_TypeDefinitionIndex = 44579;

	template <typename TTarget, typename TProperty>
	class EveryValueChangedStandardObject_2 : public ::System::Object
	{
	public:
		::System::WeakReference_1<TTarget>* target; // 0x0
		::System::Func_2<TTarget, TProperty>* propertySelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TProperty>* equalityComparer; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming monitorTiming; // 0x0
		::System::Boolean cancelImmediately; // 0x0
	};
}
