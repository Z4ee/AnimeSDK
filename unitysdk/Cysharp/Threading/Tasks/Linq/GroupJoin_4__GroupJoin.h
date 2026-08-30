#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupJoin_4__GroupJoin_TypeDefinitionIndex = 44252;

	template <typename TOuter, typename TInner, typename TKey, typename TResult>
	class GroupJoin_4__GroupJoin : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GroupJoin_4__GroupJoin_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* outer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* inner; // 0x0
		::System::Func_2<TOuter, TKey>* outerKeySelector; // 0x0
		::System::Func_2<TInner, TKey>* innerKeySelector; // 0x0
		::System::Func_3<TOuter, ::System::Collections::Generic::IEnumerable_1<TInner>*, TResult>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Linq::ILookup_2<TKey, TInner>* lookup; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>* enumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter; // 0x0
		TResult _Current_k__BackingField; // 0x0
	};
}
