#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F44F35AB58994EE2;
class Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_F44F35AB58994EE2___PLAY_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C534D0)
#define CLASS_1_F44F35AB58994EE2___PLAY_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_1_F44F35AB58994EE2___Play_d__17_TypeDefinitionIndex = 44173;

struct alignas(8) Class_1_F44F35AB58994EE2___Play_d__17
{
	::Class_1_F44F35AB58994EE2_Class_1_865D6BF93D9E5FD8* activeStageStep; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
	::Class_1_F44F35AB58994EE2* __4__this; // 0x30
	::System::Int32 __1__state; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2___PLAY_D__17_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F44F35AB58994EE2___PLAY_D__17_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
