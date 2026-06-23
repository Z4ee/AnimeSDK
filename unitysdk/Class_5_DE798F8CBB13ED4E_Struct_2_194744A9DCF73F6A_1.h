#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_DE798F8CBB13ED4E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84E6F0)
#define CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_DE798F8CBB13ED4E_Struct_2_194744A9DCF73F6A_1_TypeDefinitionIndex = 49574;

struct alignas(8) Class_5_DE798F8CBB13ED4E_Struct_2_194744A9DCF73F6A_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x20
	::Class_5_DE798F8CBB13ED4E* Field_2_2; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
