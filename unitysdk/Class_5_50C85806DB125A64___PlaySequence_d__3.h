#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_50C85806DB125A64;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_50C85806DB125A64___PLAYSEQUENCE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C53220)
#define CLASS_5_50C85806DB125A64___PLAYSEQUENCE_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_5_50C85806DB125A64___PlaySequence_d__3_TypeDefinitionIndex = 44205;

struct alignas(8) Class_5_50C85806DB125A64___PlaySequence_d__3
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
	::Class_5_50C85806DB125A64* __4__this; // 0x30
	::System::Int32 _i_5__2; // 0x38
	::System::Int32 __1__state; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___PLAYSEQUENCE_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___PLAYSEQUENCE_D__3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
