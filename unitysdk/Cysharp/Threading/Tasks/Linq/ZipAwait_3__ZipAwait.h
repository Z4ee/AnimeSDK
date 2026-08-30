#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ZipAwait_3__ZipAwait_TypeDefinitionIndex = 44604;

	template <typename TFirst, typename TSecond, typename TResult>
	class ZipAwait_3__ZipAwait : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_firstMoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZipAwait_3__ZipAwait_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_secondMoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZipAwait_3__ZipAwait_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_resultAwaitCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZipAwait_3__ZipAwait_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* second; // 0x0
		::System::Func_3<TFirst, TSecond, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>* firstEnumerator; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>* secondEnumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> firstAwaiter; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> secondAwaiter; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TResult> resultAwaiter; // 0x0
		TResult _Current_k__BackingField; // 0x0
	};
}
