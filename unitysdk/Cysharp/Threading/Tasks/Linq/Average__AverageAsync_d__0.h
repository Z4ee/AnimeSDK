#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9080)
#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Average__AverageAsync_d__0_TypeDefinitionIndex = 44090;

	struct alignas(8) Average__AverageAsync_d__0
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x28
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* source; // 0x38
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Int32>* _e_5__4; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Double> __t__builder; // 0x48
		::System::Object* __7__wrap4; // 0x60
		::System::Int32 _sum_5__3; // 0x68
		::System::Int32 __7__wrap5; // 0x6C
		::System::Int32 __1__state; // 0x70
		::System::Int64 _count_5__2; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__0_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
