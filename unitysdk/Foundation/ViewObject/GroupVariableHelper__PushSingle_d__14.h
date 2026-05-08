#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_2;
class Class_3_3EC97B498E0B85D2;
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSHSINGLE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x755690)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSHSINGLE_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__PushSingle_d__14_TypeDefinitionIndex = 46026;

	struct alignas(8) GroupVariableHelper__PushSingle_d__14
	{
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x18
		::Class_3_3EC97B498E0B85D2* reason; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*> __u__1; // 0x38
		::System::ValueTuple_2<::System::UInt32, ::System::String*> key; // 0x50
		::System::Int32 value; // 0x60
		::System::Int32 __1__state; // 0x64

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSHSINGLE_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSHSINGLE_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
