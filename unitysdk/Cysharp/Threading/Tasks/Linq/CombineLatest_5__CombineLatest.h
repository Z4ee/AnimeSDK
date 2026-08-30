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
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_5__CombineLatest_TypeDefinitionIndex = 44143;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	class CombineLatest_5__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_Completed1Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_5__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed2Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_5__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed3Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_5__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed4Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_5__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 CompleteCount = 0x4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* source4; // 0x0
		::System::Func_5<T1, T2, T3, T4, TResult>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter1; // 0x0
		::System::Boolean hasCurrent1; // 0x0
		::System::Boolean running1; // 0x0
		T1 current1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* enumerator2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter2; // 0x0
		::System::Boolean hasCurrent2; // 0x0
		::System::Boolean running2; // 0x0
		T2 current2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>* enumerator3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter3; // 0x0
		::System::Boolean hasCurrent3; // 0x0
		::System::Boolean running3; // 0x0
		T3 current3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>* enumerator4; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter4; // 0x0
		::System::Boolean hasCurrent4; // 0x0
		::System::Boolean running4; // 0x0
		T4 current4; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Boolean syncRunning; // 0x0
		TResult result; // 0x0
	};
}
