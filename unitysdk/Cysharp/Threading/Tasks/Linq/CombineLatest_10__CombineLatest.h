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
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class Func_10; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_10__CombineLatest_TypeDefinitionIndex = 44158;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename TResult>
	class CombineLatest_10__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_Completed1Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed2Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed3Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed4Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed5Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed6Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed7Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed8Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_Completed9Delegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CombineLatest_10__CombineLatest_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 CompleteCount = 0x9; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* source4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>* source5; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>* source6; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>* source7; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>* source8; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>* source9; // 0x0
		::System::Func_10<T1, T2, T3, T4, T5, T6, T7, T8, T9, TResult>* resultSelector; // 0x0
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
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>* enumerator5; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter5; // 0x0
		::System::Boolean hasCurrent5; // 0x0
		::System::Boolean running5; // 0x0
		T5 current5; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>* enumerator6; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter6; // 0x0
		::System::Boolean hasCurrent6; // 0x0
		::System::Boolean running6; // 0x0
		T6 current6; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>* enumerator7; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter7; // 0x0
		::System::Boolean hasCurrent7; // 0x0
		::System::Boolean running7; // 0x0
		T7 current7; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>* enumerator8; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter8; // 0x0
		::System::Boolean hasCurrent8; // 0x0
		::System::Boolean running8; // 0x0
		T8 current8; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>* enumerator9; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter9; // 0x0
		::System::Boolean hasCurrent9; // 0x0
		::System::Boolean running9; // 0x0
		T9 current9; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Boolean syncRunning; // 0x0
		TResult result; // 0x0
	};
}
