#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3EC97B498E0B85D2;
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CAD90)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__SetValue_d__13_TypeDefinitionIndex = 80459;

	struct alignas(8) GroupVariableHelper__SetValue_d__13
	{
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__2; // 0x18
		::Class_3_3EC97B498E0B85D2* reason; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x30
		::System::ValueTuple_2<::System::UInt32, ::System::String*> key; // 0x48
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x58
		::System::Int32 __1__state; // 0x68
		::System::Int32 value; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
