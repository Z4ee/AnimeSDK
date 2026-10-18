#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_FDF4BB9C053F8D5A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_FDF4BB9C053F8D5A___PLAYPARALLEL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52B30)
#define CLASS_5_FDF4BB9C053F8D5A___PLAYPARALLEL_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_5_FDF4BB9C053F8D5A___PlayParallel_d__3_TypeDefinitionIndex = 44200;

struct alignas(8) Class_5_FDF4BB9C053F8D5A___PlayParallel_d__3
{
	::Class_5_FDF4BB9C053F8D5A* __4__this; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
	::System::Int32 __1__state; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___PLAYPARALLEL_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_FDF4BB9C053F8D5A___PLAYPARALLEL_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
