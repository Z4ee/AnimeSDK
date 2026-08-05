#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4D3CAB8B6C237257_STRUCT_2_D0C72E16520BBF29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7833C0)
#define CLASS_1_4D3CAB8B6C237257_STRUCT_2_D0C72E16520BBF29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_4D3CAB8B6C237257_Struct_2_D0C72E16520BBF29_TypeDefinitionIndex = 87017;

struct alignas(8) Class_1_4D3CAB8B6C237257_Struct_2_D0C72E16520BBF29
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x10
	::System::Single Field_2_5; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::System::Boolean Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_STRUCT_2_D0C72E16520BBF29_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_STRUCT_2_D0C72E16520BBF29_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
