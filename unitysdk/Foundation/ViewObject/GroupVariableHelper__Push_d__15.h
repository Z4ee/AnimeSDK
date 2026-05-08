#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_2;
class Class_3_3EC97B498E0B85D2;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace Foundation::ViewObject { class GroupVariableHelper___c__DisplayClass15_0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x779B60)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__Push_d__15_TypeDefinitionIndex = 46024;

	struct alignas(8) GroupVariableHelper__Push_d__15
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::Class_3_3EC97B498E0B85D2* reason; // 0x38
		::Foundation::ViewObject::GroupVariableHelper___c__DisplayClass15_0* __8__1; // 0x40
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*>* resultTcs; // 0x48
		::System::Int32 __1__state; // 0x50
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
