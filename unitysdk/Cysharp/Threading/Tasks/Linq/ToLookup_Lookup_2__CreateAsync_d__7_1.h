#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class ToLookup_Grouping_2; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class ToLookup_Lookup_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Lookup_2__CreateAsync_d__7_1_TypeDefinitionIndex = 44550;

	template <typename TKey, typename TElement, typename TSource>
	struct ToLookup_Lookup_2__CreateAsync_d__7_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey, TElement>*> __t__builder; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::ArraySegment_1<TSource> source; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TElement>>* elementSelector; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey, TElement>*>* _dict_5__2; // 0x0
		::Il2CppArray<TSource>* _arr_5__3; // 0x0
		::System::Int32 _c_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0
		TKey _key_5__6; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TKey> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TElement> __u__2; // 0x0
	};
}
