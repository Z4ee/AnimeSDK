#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Reverse_1__Reverse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Reverse_1__Reverse__MoveNextAsync_d__9_TypeDefinitionIndex = 44411;

	template <typename TSource>
	struct Reverse_1__Reverse__MoveNextAsync_d__9
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<TSource>*> __u__1; // 0x0
	};
}
