#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_MAX__MAXASYNC_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BBB8B0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX__MAXASYNC_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max__MaxAsync_d__40_TypeDefinitionIndex = 44299;

	struct alignas(8) Max__MaxAsync_d__40
	{
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<::System::Decimal>>* _e_5__3; // 0x10
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* source; // 0x18
		::System::Object* __7__wrap3; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>> __t__builder; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x50
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x58
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x68
		::System::Int32 __1__state; // 0x78
		::System::Int32 __7__wrap4; // 0x7C
		::System::Nullable_1<::System::Decimal> _value_5__2; // 0x80
		::System::Nullable_1<::System::Decimal> __7__wrap5; // 0x94

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX__MAXASYNC_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX__MAXASYNC_D__40_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
