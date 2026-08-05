#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3E2EF1FFB1C88E56_Class_1_61AE483B33052410_26;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_3E2EF1FFB1C88E56_STRUCT_2_9D2EC0204F1FCEC5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x876670)
#define CLASS_1_3E2EF1FFB1C88E56_STRUCT_2_9D2EC0204F1FCEC5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_3E2EF1FFB1C88E56_Struct_2_9D2EC0204F1FCEC5_TypeDefinitionIndex = 74285;

struct alignas(8) Class_1_3E2EF1FFB1C88E56_Struct_2_9D2EC0204F1FCEC5
{
	::System::String* Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::System::Action* Field_2_1; // 0x38
	::Class_1_3E2EF1FFB1C88E56_Class_1_61AE483B33052410_26* Field_2_7; // 0x40
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x48
	::System::Int32 Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_STRUCT_2_9D2EC0204F1FCEC5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_3E2EF1FFB1C88E56_STRUCT_2_9D2EC0204F1FCEC5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
