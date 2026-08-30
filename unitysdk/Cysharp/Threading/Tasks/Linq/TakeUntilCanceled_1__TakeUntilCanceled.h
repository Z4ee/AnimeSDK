#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeUntilCanceled_1__TakeUntilCanceled_TypeDefinitionIndex = 44519;

	template <typename TSource>
	class TakeUntilCanceled_1__TakeUntilCanceled : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_CancelDelegate1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TakeUntilCanceled_1__TakeUntilCanceled_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_CancelDelegate2()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TakeUntilCanceled_1__TakeUntilCanceled_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TakeUntilCanceled_1__TakeUntilCanceled_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration1; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration2; // 0x0
		::System::Boolean isCanceled; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* enumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> awaiter; // 0x0
		TSource _Current_k__BackingField; // 0x0
	};
}
