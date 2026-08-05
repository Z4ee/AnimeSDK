#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__GETVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82B890)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__GETVALUE_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__GetValue_d__11_TypeDefinitionIndex = 51593;

	struct alignas(8) GroupVariableHelper__GetValue_d__11
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>> __t__builder; // 0x20
		::System::ValueTuple_2<::System::UInt32, ::System::String*> key; // 0x38
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__GETVALUE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__GETVALUE_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
