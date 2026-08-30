#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9200)
#define CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Min__MinAsync_d__28_TypeDefinitionIndex = 44341;

	struct alignas(8) Min__MinAsync_d__28
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* source; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<::System::Int64>> __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x40
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<::System::Int64>>* _e_5__3; // 0x50
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x58
		::System::Object* __7__wrap3; // 0x68
		::System::Nullable_1<::System::Int64> _value_5__2; // 0x70
		::System::Int32 __7__wrap4; // 0x80
		::System::Int32 __1__state; // 0x84
		::System::Nullable_1<::System::Int64> __7__wrap5; // 0x88

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
