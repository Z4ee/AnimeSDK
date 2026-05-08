#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_76615B7B6F13B74A;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_76615B7B6F13B74A_STRUCT_2_02CE1F8AD43F88B5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E3450)
#define CLASS_2_76615B7B6F13B74A_STRUCT_2_02CE1F8AD43F88B5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_76615B7B6F13B74A_Struct_2_02CE1F8AD43F88B5_TypeDefinitionIndex = 39164;

struct alignas(8) Class_2_76615B7B6F13B74A_Struct_2_02CE1F8AD43F88B5
{
	::Class_2_76615B7B6F13B74A* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x20
	::System::Action* Field_2_3; // 0x30
	::System::Int32 Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x3C
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_02CE1F8AD43F88B5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_02CE1F8AD43F88B5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
