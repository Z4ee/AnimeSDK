#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/Merge_1_MergeSourceState.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Merge_1__Merge_TypeDefinitionIndex = 44328;

	template <typename T>
	class Merge_1__Merge : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_GetResultAtAction()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Merge_1__Merge_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 length; // 0x0
		::Il2CppArray<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>* enumerators; // 0x0
		::Il2CppArray<::Cysharp::Threading::Tasks::Linq::Merge_1_MergeSourceState<T>>* states; // 0x0
		::System::Collections::Generic::Queue_1<::System::ValueTuple_3<T, ::System::Exception*, ::System::Boolean>>* queuedResult; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 moveNextCompleted; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
