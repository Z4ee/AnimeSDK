#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_A9E4F56D487F1DE2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_A9E4F56D487F1DE2___PLAYANIMATION_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2E847A0)
#define CLASS_5_A9E4F56D487F1DE2___PLAYANIMATION_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_5_A9E4F56D487F1DE2___PlayAnimation_d__3_TypeDefinitionIndex = 49760;

struct alignas(8) Class_5_A9E4F56D487F1DE2___PlayAnimation_d__3
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
	::Class_5_A9E4F56D487F1DE2* __4__this; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
	::System::Int32 __1__state; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A9E4F56D487F1DE2___PLAYANIMATION_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_A9E4F56D487F1DE2___PLAYANIMATION_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
