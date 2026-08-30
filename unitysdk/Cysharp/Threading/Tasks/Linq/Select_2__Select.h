#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Select_2__Select_TypeDefinitionIndex = 44413;

	template <typename TSource, typename TResult>
	class Select_2__Select : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, TResult>* selector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 state; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* enumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter; // 0x0
		::System::Action* moveNextAction; // 0x0
		TResult _Current_k__BackingField; // 0x0
	};
}
