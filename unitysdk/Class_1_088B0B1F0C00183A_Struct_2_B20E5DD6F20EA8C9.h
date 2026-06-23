#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_088B0B1F0C00183A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_088B0B1F0C00183A_STRUCT_2_B20E5DD6F20EA8C9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B19F0)
#define CLASS_1_088B0B1F0C00183A_STRUCT_2_B20E5DD6F20EA8C9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x646640)

inline static constexpr unsigned int Class_1_088B0B1F0C00183A_Struct_2_B20E5DD6F20EA8C9_TypeDefinitionIndex = 55564;

struct alignas(8) Class_1_088B0B1F0C00183A_Struct_2_B20E5DD6F20EA8C9
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::Class_1_088B0B1F0C00183A* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_4; // 0x4C
	::System::Int32 Field_2_3; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088B0B1F0C00183A_STRUCT_2_B20E5DD6F20EA8C9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_088B0B1F0C00183A_STRUCT_2_B20E5DD6F20EA8C9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
