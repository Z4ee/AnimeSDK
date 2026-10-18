#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_4_0E8A2A1662D04C91;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_0E8A2A1662D04C91___ONASYNCEXECUTEIMPLEMENT_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52270)
#define CLASS_4_0E8A2A1662D04C91___ONASYNCEXECUTEIMPLEMENT_D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_4_0E8A2A1662D04C91___OnAsyncExecuteImplement_d__1_TypeDefinitionIndex = 44191;

struct alignas(8) Class_4_0E8A2A1662D04C91___OnAsyncExecuteImplement_d__1
{
	::Class_4_0E8A2A1662D04C91* __4__this; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
	::System::Threading::CancellationToken cancelToken; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
	::System::Int32 __1__state; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0E8A2A1662D04C91___ONASYNCEXECUTEIMPLEMENT_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_0E8A2A1662D04C91___ONASYNCEXECUTEIMPLEMENT_D__1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
