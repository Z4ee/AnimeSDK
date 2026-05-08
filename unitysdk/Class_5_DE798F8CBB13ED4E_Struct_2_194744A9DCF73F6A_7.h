#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_DE798F8CBB13ED4E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E7380)
#define CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_5_DE798F8CBB13ED4E_Struct_2_194744A9DCF73F6A_7_TypeDefinitionIndex = 76698;

struct alignas(8) Class_5_DE798F8CBB13ED4E_Struct_2_194744A9DCF73F6A_7
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Class_5_DE798F8CBB13ED4E* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_DE798F8CBB13ED4E_STRUCT_2_194744A9DCF73F6A_7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
