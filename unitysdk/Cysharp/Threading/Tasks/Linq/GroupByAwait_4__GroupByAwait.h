#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwait_4__GroupByAwait_TypeDefinitionIndex = 44243;

	template <typename TSource, typename TKey, typename TElement, typename TResult>
	class GroupByAwait_4__GroupByAwait : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_ResultSelectCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GroupByAwait_4__GroupByAwait_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TElement>>* elementSelector; // 0x0
		::System::Func_3<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* groupEnumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TResult> awaiter; // 0x0
		TResult _Current_k__BackingField; // 0x0
	};
}
