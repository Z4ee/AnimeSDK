#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PROLOGUE_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3700)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PROLOGUE_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__Prologue_d__9_TypeDefinitionIndex = 51597;

	struct alignas(8) GroupVariableHelper__Prologue_d__9
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Boolean isWrite; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PROLOGUE_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PROLOGUE_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
