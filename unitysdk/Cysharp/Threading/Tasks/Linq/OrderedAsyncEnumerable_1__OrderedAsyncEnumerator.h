#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class OrderedAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerable_1__OrderedAsyncEnumerator_TypeDefinitionIndex = 44388;

	template <typename TElement>
	class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Il2CppArray<TElement>* buffer; // 0x0
		::Il2CppArray<::System::Int32>* map; // 0x0
		::System::Int32 index; // 0x0
		TElement _Current_k__BackingField; // 0x0
	};
}
